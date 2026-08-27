Add-Type -TypeDefinition @"
using System;
using System.Text;
using System.Runtime.InteropServices;
public class WinProcFinder {
    public delegate bool EnumWindowsProc(IntPtr hWnd, IntPtr lParam);
    [DllImport("user32.dll")]
    public static extern bool EnumWindows(EnumWindowsProc lpEnumFunc, IntPtr lParam);
    [DllImport("user32.dll")]
    public static extern uint GetWindowThreadProcessId(IntPtr hWnd, out uint lpdwProcessId);
    [DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
    public static extern int GetWindowText(IntPtr hWnd, StringBuilder lpString, int nMaxCount);
    [DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
    public static extern int GetClassName(IntPtr hWnd, StringBuilder lpClassName, int nMaxCount);
    [DllImport("user32.dll")]
    public static extern bool GetWindowRect(IntPtr hWnd, out RECT lpRect);
    [DllImport("user32.dll")]
    public static extern IntPtr GetDC(IntPtr hWnd);
    [DllImport("user32.dll")]
    public static extern int ReleaseDC(IntPtr hWnd, IntPtr hDC);
    [DllImport("gdi32.dll")]
    public static extern IntPtr CreateCompatibleDC(IntPtr hdc);
    [DllImport("gdi32.dll")]
    public static extern IntPtr CreateCompatibleBitmap(IntPtr hdc, int nWidth, int nHeight);
    [DllImport("gdi32.dll")]
    public static extern IntPtr SelectObject(IntPtr hdc, IntPtr hgdiobj);
    [DllImport("gdi32.dll")]
    public static extern bool BitBlt(IntPtr hdcDest, int nXDest, int nYDest, int nWidth, int nHeight, IntPtr hdcSrc, int nXSrc, int nYSrc, uint dwRop);
    [DllImport("gdi32.dll")]
    public static extern bool DeleteDC(IntPtr hdc);
    [DllImport("gdi32.dll")]
    public static extern bool DeleteObject(IntPtr hObject);
    [StructLayout(LayoutKind.Sequential)]
    public struct RECT { public int Left, Top, Right, Bottom; }
}
"@

Add-Type -AssemblyName System.Drawing

$proc = Get-Process -Name "Conker" -ErrorAction SilentlyContinue
if (!$proc) {
    Write-Output "Conker process not found."
    exit
}

$targetPid = [uint32]$proc.Id
$foundHwnd = [IntPtr]::Zero

[WinProcFinder]::EnumWindows({
    param($hwnd, $lparam)
    $pidOut = [uint32]0
    [WinProcFinder]::GetWindowThreadProcessId($hwnd, [ref]$pidOut) | Out-Null
    if ($pidOut -eq $targetPid) {
        $sbTitle = New-Object System.Text.StringBuilder 256
        $sbClass = New-Object System.Text.StringBuilder 256
        [WinProcFinder]::GetWindowText($hwnd, $sbTitle, $sbTitle.Capacity) | Out-Null
        [WinProcFinder]::GetClassName($hwnd, $sbClass, $sbClass.Capacity) | Out-Null
        Write-Output "Found Window for PID $pidOut : HWND=$hwnd, Class='$($sbClass.ToString())', Title='$($sbTitle.ToString())'"
        $script:foundHwnd = $hwnd
    }
    return $true
}, [IntPtr]::Zero) | Out-Null

if ($foundHwnd -ne [IntPtr]::Zero) {
    $rect = New-Object WinProcFinder+RECT
    [WinProcFinder]::GetWindowRect($foundHwnd, [ref]$rect)
    $w = $rect.Right - $rect.Left
    $h = $rect.Bottom - $rect.Top
    Write-Output "Capturing Window: ${w}x${h} at ($($rect.Left), $($rect.Top))"

    if ($w -gt 0 -and $h -gt 0) {
        $hdcSrc = [WinProcFinder]::GetDC($foundHwnd)
        $hdcDest = [WinProcFinder]::CreateCompatibleDC($hdcSrc)
        $hBitmap = [WinProcFinder]::CreateCompatibleBitmap($hdcSrc, $w, $h)
        $hOld = [WinProcFinder]::SelectObject($hdcDest, $hBitmap)
        
        [WinProcFinder]::BitBlt($hdcDest, 0, 0, $w, $h, $hdcSrc, 0, 0, 0x00CC0020) | Out-Null
        
        $img = [System.Drawing.Image]::FromHbitmap($hBitmap)
        $dest = "C:\Users\danie\.gemini\antigravity-ide\brain\15a71f62-4139-43e3-8c63-3b39a44347f7\conker_rt64_vulkan_frame.png"
        $img.Save($dest, [System.Drawing.Imaging.ImageFormat]::Png)
        $img.Dispose()
        
        [WinProcFinder]::SelectObject($hdcDest, $hOld) | Out-Null
        [WinProcFinder]::DeleteObject($hBitmap) | Out-Null
        [WinProcFinder]::DeleteDC($hdcDest) | Out-Null
        [WinProcFinder]::ReleaseDC($foundHwnd, $hdcSrc) | Out-Null
        
        Write-Output "SUCCESS: Saved screenshot to $dest"
    }
}

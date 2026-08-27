Add-Type -AssemblyName System.Windows.Forms
Add-Type -AssemblyName System.Drawing

Add-Type -TypeDefinition @"
using System;
using System.Text;
using System.Runtime.InteropServices;
public class Win32Finder {
    public delegate bool EnumWindowsProc(IntPtr hWnd, IntPtr lParam);
    [DllImport("user32.dll")]
    public static extern bool EnumWindows(EnumWindowsProc lpEnumFunc, IntPtr lParam);
    [DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
    public static extern int GetWindowText(IntPtr hWnd, StringBuilder lpString, int nMaxCount);
    [DllImport("user32.dll")]
    public static extern bool IsWindowVisible(IntPtr hWnd);
    [DllImport("user32.dll")]
    public static extern bool GetWindowRect(IntPtr hWnd, out RECT lpRect);
    [DllImport("user32.dll")]
    public static extern bool SetForegroundWindow(IntPtr hWnd);
    [StructLayout(LayoutKind.Sequential)]
    public struct RECT { public int Left, Top, Right, Bottom; }
}
"@

$windows = New-Object System.Collections.Generic.List[IntPtr]
[Win32Finder]::EnumWindows({
    param($hwnd, $lparam)
    $sb = New-Object System.Text.StringBuilder 256
    [Win32Finder]::GetWindowText($hwnd, $sb, $sb.Capacity) | Out-Null
    $title = $sb.ToString()
    if ($title -like "*Conker*" -or $title -like "*Bad Fur Day*") {
        $windows.Add($hwnd)
        Write-Output "Found Window: HWND=$hwnd, Title='$title'"
    }
    return $true
}, [IntPtr]::Zero) | Out-Null

if ($windows.Count -gt 0) {
    $hwnd = $windows[0]
    [Win32Finder]::SetForegroundWindow($hwnd)
    Start-Sleep -Milliseconds 400
    $rect = New-Object Win32Finder+RECT
    [Win32Finder]::GetWindowRect($hwnd, [ref]$rect)
    $w = $rect.Right - $rect.Left
    $h = $rect.Bottom - $rect.Top
    if ($w -gt 0 -and $h -gt 0) {
        $bmp = New-Object System.Drawing.Bitmap($w, $h)
        $gfx = [System.Drawing.Graphics]::FromImage($bmp)
        $gfx.CopyFromScreen($rect.Left, $rect.Top, 0, 0, (New-Object System.Drawing.Size($w, $h)))
        $dest = "C:\Users\danie\.gemini\antigravity-ide\brain\15a71f62-4139-43e3-8c63-3b39a44347f7\conker_rt64_vulkan_live.png"
        $bmp.Save($dest, [System.Drawing.Imaging.ImageFormat]::Png)
        $gfx.Dispose()
        $bmp.Dispose()
        Write-Output "SUCCESS: Captured $w x $h window to $dest"
    }
} else {
    Write-Output "Scanning entire screen..."
    $screen = [System.Windows.Forms.Screen]::PrimaryScreen.Bounds
    $bmp = New-Object System.Drawing.Bitmap($screen.Width, $screen.Height)
    $gfx = [System.Drawing.Graphics]::FromImage($bmp)
    $gfx.CopyFromScreen(0, 0, 0, 0, $screen.Size)
    $dest = "C:\Users\danie\.gemini\antigravity-ide\brain\15a71f62-4139-43e3-8c63-3b39a44347f7\conker_screen_capture.png"
    $bmp.Save($dest, [System.Drawing.Imaging.ImageFormat]::Png)
    $gfx.Dispose()
    $bmp.Dispose()
    Write-Output "SUCCESS: Captured full screen to $dest"
}

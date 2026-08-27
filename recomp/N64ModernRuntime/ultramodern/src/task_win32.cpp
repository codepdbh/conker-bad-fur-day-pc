#ifdef _WIN32

#include <windows.h>

#include "ultramodern/ultra64.h"
#include "ultramodern/ultramodern.hpp"

extern "C" unsigned int sleep(unsigned int seconds) {
    Sleep(seconds * 1000);
    return 0;
}

#endif
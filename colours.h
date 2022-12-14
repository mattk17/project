// This code is written for you to simplify the process of changing the colours of
// your console text. The code in here is beyond the scope of this course. Make sure
// to use the correct function that corresponds to your operating system

// *** DO NOT EDIT THIS FILE ***

#ifndef ENGINEERINGPROGRAMMINGPROJECT_COLOURS_H
#define ENGINEERINGPROGRAMMINGPROJECT_COLOURS_H

#define YELLOW 6
#define PINK 13
#define BLUE 1
#define WHITE 15

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
    //define something for Windows (32-bit and 64-bit, this part is common)
    int colourChangeWin(int colour);
    #ifdef _WIN64
    //define something for Windows (64-bit only)
    #else
    //define something for Windows (32-bit only)
#endif
#elif __APPLE__ // Try defined(__APPLE__) if this doesn't work
    #include <TargetConditionals.h>
    int colourChangeMac(int colour);
    #if TARGET_IPHONE_SIMULATOR
        // iOS, tvOS, or watchOS Simulator
    #elif TARGET_OS_MACCATALYST
        // Mac's Catalyst (ports iOS API into Mac, like UIKit).
    #elif TARGET_OS_IPHONE
        // iOS, tvOS, or watchOS device
    #elif TARGET_OS_MAC
        // Other kinds of Apple platforms
    #else
    #   error "Unknown Apple platform"
    #endif
#elif __linux__
    // linux
#elif __unix__ // all unices not caught above
    // Unix
#elif defined(_POSIX_VERSION)
    // POSIX
#else
#   error "Unknown compiler"
#endif

#endif //ENGINEERINGPROGRAMMINGPROJECT_COLOURS_H

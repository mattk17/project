// This code is written for you to simplify the process of changing the colours of
// your console text. The code in here is beyond the scope of this course. Make sure
// to use the correct function that corresponds to your operating system

// *** DO NOT EDIT THIS FILE ***

#include "colours.h"
#include <windows.h>
#include <cstdio>

int colourChangeWin(int colour){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colour);
    return EXIT_SUCCESS;
}

int colourChangeMac(int colour) {
    switch (colour) {
        case BLUE: printf("\x1b[34m"); break;
        case YELLOW: printf("\x1b[33m"); break;
        case PINK: printf("\x1b[35m"); break;
        case WHITE: printf("\x1b[30m"); break;
        default: return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}


// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

#pragma once

//defining the functions in header file, so that they are identified
int getPerimeter(int* length, int* width) {
    return 2 * (*length + *width);
}

int getArea(int* length, int* width) {
    return (*length) * (*width);
}

void setLength(int input, int* length) {
    *length = input;
}

void setWidth(int input, int* width) {
    *width = input;
}

 

#endif //PCH_H

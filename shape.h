//
// Created by JAD on 24/03/2023.
//
#include <string.h>
#ifndef SPLITSTRINGTOARRAY_SHAPE_H
#define SPLITSTRINGTOARRAY_SHAPE_H
typedef enum {SQUARE, CIRCLE, POINT, UNKNOWN} TypeSquare;

TypeSquare stringToTypeSquare(char* squareInString);

#endif //SPLITSTRINGTOARRAY_SHAPE_H

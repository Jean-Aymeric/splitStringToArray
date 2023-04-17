//
// Created by JAD on 24/03/2023.
//
#include "shape.h"

TypeSquare stringToTypeSquare(char* squareInString) {
    if (strcmp(squareInString, "square") == 0) {
        return SQUARE;
    }
    if (strcmp(squareInString, "circle") == 0) {
        return CIRCLE;
    }
    if (strcmp(squareInString, "point") == 0) {
        return POINT;
    }
    return UNKNOWN;
}
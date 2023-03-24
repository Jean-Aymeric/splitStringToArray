//
// Created by JAD on 24/03/2023.
//

#include <string.h>
#include <stdlib.h>

#ifndef SPLIT_STRING_TO_ARRAY_H
#define SPLIT_STRING_TO_ARRAY_H

typedef struct {
    char **array;
    unsigned int size;
} StringArray;

StringArray splitStringToArray(const char *stringToSplit, const char *delimiter);

#endif //SPLIT_STRING_TO_ARRAY_H

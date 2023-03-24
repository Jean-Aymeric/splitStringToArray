//
// Created by JAD on 24/03/2023.
//

#include "splitstringtoarray.h"

unsigned int countStringArrayElements(char *array, char *delimiter) {
    unsigned int count = 1;
    size_t delimiterLength = strlen(delimiter);
    char *temporary = array;
    while (*temporary != '\0') {
        if (strncmp(temporary, delimiter, delimiterLength) == 0) {
            count++;
            temporary += delimiterLength;
        } else {
            temporary++;
        }
        temporary++;
    }
    return count;
}

StringArray splitStringToArray(char *stringToSplit, char *delimiter) {
    StringArray result;

    result.size = countStringArrayElements(stringToSplit, delimiter);
    result.array = (char **) malloc(sizeof(char *) * result.size);

    if (result.array == NULL) {
        result.size = 0;
    } else {
        char* stringToSplitCopy = strdup(stringToSplit);
        char *temporary = strtok(stringToSplitCopy, delimiter);
        unsigned int lineIndex = 0;
        while(temporary != NULL && lineIndex < result.size) {
            size_t subStringLength = strlen(temporary);
            result.array[lineIndex] = (char *) malloc(sizeof(char) * (subStringLength+1));
            result.array[lineIndex] = strcpy(result.array[lineIndex], temporary);
            lineIndex++;
            temporary = strtok(NULL, delimiter);
        }
    }
    return result;
}
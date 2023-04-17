#include "splitstringtoarray.h"
#include "shape.h"
#include <stdio.h>

int main() {
    const char *stringToSplit = "caca 10 10 20";
    const char *delimiter = " ";
    StringArray result = splitStringToArray(stringToSplit, delimiter);
    switch (stringToTypeSquare(result.array[0])) {
        case SQUARE:
            printf("La personne veut un carré, de longueur %s en coordonnées (%s, %s)\n",
                   result.array[3], result.array[1], result.array[2]);
            break;
        case CIRCLE:
            printf("La personne veut un cercle, de diamètre %s en coordonnées (%s, %s)\n",
                   result.array[3], result.array[1], result.array[2]);
            break;
        case UNKNOWN:
            printf("Unknow command\n");
    }
    for (int i = 0; i < result.size; i++) {
        printf("%s\n", result.array[i]);
    }
    return 0;
}

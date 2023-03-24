#include "splitstringtoarray.h"
#include <stdio.h>

int main() {
    char *stringToSplit = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi in sem vel orci rutrum lacinia. Suspendisse ligula nisl, egestas a molestie eu, commodo vel metus. Pellentesque nec odio non libero luctus fringilla. Donec ut tempor sapien. Nam non gravida arcu. Integer scelerisque quam at mi tristique, id sagittis est fermentum. Integer eleifend eleifend sem nec dignissim. Suspendisse nec ex nec ante consectetur lacinia eu eget libero. Etiam varius nunc arcu, quis sagittis ante sollicitudin at.";
    char *delimiter = " ";
    StringArray result = splitStringToArray(stringToSplit, delimiter);
    for (int i = 0; i < result.size; i++) {
        printf("%s\n", result.array[i]);
    }
    return 0;
}

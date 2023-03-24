#include "splitstringtoarray.h"
#include <stdio.h>

int main() {
    const char *stringToSplit = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse imperdiet turpis a ultrices interdum. Nulla facilisi. Maecenas vitae ipsum nec mi euismod venenatis eu sed libero. In non erat nunc. Cras vitae augue ac augue mattis sodales at at nibh. Praesent at sollicitudin lacus, a cursus dolor. Etiam congue vel enim id blandit. Nulla sagittis ut elit nec maximus. Cras vulputate sodales egestas. Nullam sodales semper lacinia. Praesent eu eros ac velit consequat sodales. Maecenas vitae placerat nisl, vel aliquet urna. In hac habitasse platea dictumst. Integer nec lectus imperdiet, iaculis velit at, molestie est. Suspendisse euismod dictum sem sit amet mollis. Aenean eu lorem vel tortor tincidunt blandit. Nullam lobortis et nibh in iaculis.";
    const char *delimiter = ". ";
    StringArray result = splitStringToArray(stringToSplit, delimiter);
    for (int i = 0; i < result.size; i++) {
        printf("%s\n", result.array[i]);
    }
    return 0;
}

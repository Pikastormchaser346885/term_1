#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* p = (char*)malloc(strlen("Cats and Dogs") + 1); 

    strcpy(p, "Cats and Dogs"); 

    printf("%s\n", p); 

    free(p); 

    return 0;
}

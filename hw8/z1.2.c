#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char* p = (char*)malloc(strlen("Elephant")+1);
    
    strcpy(p, "Elephant");

    printf("%s\n", p);

    free(p); 

    return 0;
}



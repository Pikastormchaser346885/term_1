#include <stdio.h>

int main() 
{
    char a = ')';
    
    char *p = &a;
    
    FILE *file = fopen("result.txt", "w");
    
    fprintf(file, "%p\n", (void *)p);
    
    fclose(file);
    
    return 0;
}
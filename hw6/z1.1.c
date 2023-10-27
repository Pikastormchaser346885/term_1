#include <stdio.h>

int main() 
{
    int a = 1234;
    
    int *p = &a;
    
    FILE *file = fopen("result.txt", "w");
    
    fprintf(file, "%p\n", (void *)p);
    
    fclose(file);
    
    return 0;
}
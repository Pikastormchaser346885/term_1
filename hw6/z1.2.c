#include <stdio.h>

int main() 
{
    double a = 12.34;
    
    double *p = &a;
    
    FILE *file = fopen("result.txt", "w");
    
    fprintf(file, "%p\n", (void *)p);
    
    fclose(file);
    
    return 0;
}
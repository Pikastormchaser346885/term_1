#include <stdio.h>

int main() 
{
    char str[20] = "Sapere Aude";
    
    char *p = str; 
    
    FILE *file = fopen("result.txt", "w");
    
    if (file != NULL) 
    {
        fprintf(file, "%p\n", (void *)p);
        
        fclose(file);
    } 
    
    else 
    
    {
        printf("Failed to open the file.\n");
        
        return 1; 
    }
    
    return 0;
}
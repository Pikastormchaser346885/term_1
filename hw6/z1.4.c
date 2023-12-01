#include <stdio.h>

int main() 
{
    int array[5] = {10, 20, 30, 40, 50};
    
    int *p = &array[0]; 
    
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
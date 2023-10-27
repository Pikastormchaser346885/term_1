#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void save_numbers_text(const char* filename, double* array, int n) 
{
    FILE* file = fopen(filename, "w");
    
    if (file == NULL) 
    {
        printf("Error\n");
        
        return;
    }

    fprintf(file, "%d\n", n); 

    for (int i = 0; i < n; ++i) 
    {
        fprintf(file, "%.15lf\n", array[i]); 
    }

    fclose(file);
}

int main() 
{
    int n = 1000;
    
    double* array = (double*)malloc(n * sizeof(double));
    
    for (int i = 0; i < n; ++i)
    
        array[i] = sin(M_PI * i / n);

    save_numbers_text("numbers.txt", array, n);

    free(array);

    return 0;
}





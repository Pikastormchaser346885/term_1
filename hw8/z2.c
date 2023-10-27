#include <stdio.h>
#include <stdlib.h>

float* get_geometric_progression(float a, float r, int n) 
{
    float* progression = (float*)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++) 
    {
        progression[i] = a * pow(r, i);
    }

    return progression; 
}

int main() 
{
    float* progression = get_geometric_progression(1.0f, 3.0f, 10);

    for (int i = 0; i < 10; i++) 
    {
        printf("%.2f ", progression[i]);
    }
    
    printf("\n");

    free(progression); 

    return 0;
}
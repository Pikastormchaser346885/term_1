#include <stdio.h>

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    
    int* p = &array[0];
    
    (*p) += 1;

    p += 3;
    
    (*p) += 1;

    for (int i = 0; i < 5; ++i) 
    {
        *(p + i) += 1;
    }
    
    for (int i = 0; i < 5; ++i)
    
    printf("%i ", array[i]);
}
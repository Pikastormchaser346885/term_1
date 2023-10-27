#include <stdio.h>

int main()

{
    
    int array[5] = {10, 20, 30, 40, 50};
    
    int* p = &array[3];
    
    (*p - 2) -= 1;
    
    for (int i = 0; i < 5; ++i)
    
    printf("%i ", array[i]);
}
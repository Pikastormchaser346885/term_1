#include <stdio.h>

void mult2_array(int* p, size_t n) 
{
    for (size_t i = 0; i < n; ++i) 
    {
        p[i] *= 2;
    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    
    size_t size = sizeof(arr) / sizeof(arr[0]);

    mult2_array(arr, size);

    for (size_t i = 0; i < size; ++i) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
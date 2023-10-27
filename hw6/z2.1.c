#include <stdio.h>

int main()

{
    
    int a = 1234;
    
    int* p = &a;
    
    *p *= 2;

    printf("%i\n", a);
}

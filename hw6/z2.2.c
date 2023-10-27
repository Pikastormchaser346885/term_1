#include <stdio.h>

int main()

{
    
    int a = 1234;
    
    int* p = &a;
    
    *p = (*p) * (*p);
    
    printf("%i\n", a);
}

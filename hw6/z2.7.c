#include <stdio.h>
int main()
{
    
int a = 1234;

int* p = &a;

int** q = &p;

**q *=2;

printf("%i\n", a);

}
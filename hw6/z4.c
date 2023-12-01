#include <stdio.h>


void cube(float *p) 
{
    *p = (*p) * (*p) * (*p);
}

int main() 
{
    float number;

    scanf("%f", &number);

    float *p = &number;

    cube(p);

    printf("Значение в кубе: %.2f\n", number);

    return 0;
}
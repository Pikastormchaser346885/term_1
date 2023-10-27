#include <stdio.h>
#include <stdlib.h>

int main() 
{
    long long* p = (long long*)malloc(sizeof(long long)); 
    
    *p = 123; 

    printf("Значение в куче: %lld\n", *p);

    free(p); 

    return 0;
}
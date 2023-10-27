#include <stdio.h>

int is_little_endian() 
{
    int num = 1;
    
    char *ptr = (char *)&num; //проверка равен ли единице младший байт переменной
    
    return (*ptr == 1);
}

int main() 
{
    if (is_little_endian()) 
    {
        printf("Little Endian\n");
        
    } 
    
    else 
    {
        printf("Big Endian\n");
    }
    
    return 0;
}

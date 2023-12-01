#include <stdio.h>

int main()
{
    char a = 't'; 
    
    char* p = &a;
    
    *p = (char)toupper(*p); 

    printf("%c\n", a); 
    
    return 0;
}
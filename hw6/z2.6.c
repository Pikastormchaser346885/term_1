#include <stdio.h>
#include <ctype.h>

int main() {
    
    char str[] = "sapere aude";
    
    char* p = &str[0];
    
    *p = (char)toupper(*p);
    
    p += 7;
    
    *p = (char)toupper(*p);
    
    for (int i = 0; i < 5; ++i) 
    {
        *(p + i) = (char)toupper(*(p + i));
    }
    
    printf("%s\n", str);
    
    return 0;
}
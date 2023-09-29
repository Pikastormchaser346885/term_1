#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 1000

void safe_strcpy(char a[], size_t a_size, const char b[]) 
{
    size_t b_len = strlen(b);
    size_t maxlen = a_size - 1; 
    size_t copy_len;

    if (b_len < maxlen) 
    {
       copy_len = b_len;
    } 
    else 
    {
        copy_len = maxlen;
    }

    strncpy(a, b, copy_len);
    a[copy_len] = '\0';
}

int main() {
    char a[10] = "Mouse";
    char b[50] = "LargeElephant";

    safe_strcpy(a, sizeof(a), b);

    printf("%s\n", a);

    return 0;
}

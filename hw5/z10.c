#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 1000


void delete_chars(char* str, char c) {
    int index = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != c) {
            str[index++] = str[i];
        }
    }

    str[index] = '\0';
}

int main() {
    char a[MAX];
    char c;
    scanf("%[^\n]", a);
    

    scanf(" %c", &c);

    delete_chars(a, c);


 printf("%s\n", a);
    return 0;
}
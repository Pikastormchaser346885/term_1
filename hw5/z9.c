#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 1000

int longest_word(const char str[], char duck[]) {
    int longest = 0;
    int len = 0;
    int word_start = -1;


    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {

            if (word_start == -1) {
                word_start = i;
            }

            len++;
        } else {

            if (len > longest) {
                longest = len;
                strncpy(duck, &str[word_start], longest);
                duck[longest] = '\0';
            }

            len = 0;
            word_start = -1;
        }
    }


    if (len > longest) {
        longest = len;
        strncpy(duck, &str[word_start], longest);
        duck[longest] = '\0';
    }

    return longest;
}

int main() {
    char a[MAX];
    int x;
    scanf("%[^\n]", a);
    char DUCK[MAX];
    
    int word_length = longest_word(a, DUCK);

    printf("%s\n", DUCK);


    return 0;
}
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 1000


int main() {
    int x = 0;   
    int y = 0;   

    int num;   
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        char duck[MAX];  
        int distance;         

        scanf("%s %d", duck, &distance);


        if (strcmp(duck, "North") == 0) {
            y += distance;
        } else if (strcmp(duck, "South") == 0) {
            y -= distance;
        } else if (strcmp(duck, "East") == 0) {
            x += distance;
        } else if (strcmp(duck, "West") == 0) {
            x -= distance;
        }
    }

    printf("(%d, %d)\n", x, y);

    return 0;
}
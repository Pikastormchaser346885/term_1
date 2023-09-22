#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 100
#include <stddef.h>


int main() {

    printf("char:        %zu\n", sizeof(char));
    printf("short:       %zu\n", sizeof(short));
    printf("int:         %zu\n", sizeof(int));
    printf("long long:   %zu\n", sizeof(long long));
    printf("size_t:      %zu\n", sizeof(size_t));
    printf("float:       %zu\n", sizeof(float));
    printf("double:      %zu\n", sizeof(double));
    printf("int[10]:     %zu\n", sizeof(int[10]));
    printf("char[10]:    %zu\n", sizeof(char[10]));

    return 0;
}
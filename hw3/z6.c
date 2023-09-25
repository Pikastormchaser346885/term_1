#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>

void print_binary( int n )
{
  if ( n == 0 ) return;
  
  print_binary( n / 2 );

  printf ( "%d", n % 2 );
}

int main()
{
    int n, m, i, j, a, b;
    scanf("%d", &a); 

    print_binary(a);

    return 0;
}
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

//void  sum_of_digits(int n) 
//{
    
    //int sum = 0;
    
   // while (n != 0) {
      //  int digit = n % 10; 
     //   sum += digit; 
   //  //   n /= 10; 
   // }

    //return sum;
    
 //   printf("%d ", sum);
//}

//printf("%d ", i);
//return x*x*x;

int main()
{
    int n, m, i, j,a,b;
    scanf("%d", &a); 
    print_binary(a);
    return 0;
   // printf("%i\n", is_even(90));
    //printf("%i\n", is_even(91));

    //printf("%i\n", is_even(5));
    //("%i\n", duck(n));
}
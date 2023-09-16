#include <stdio.h>
#include <limits.h>
int main()
{
    int n,i;

    scanf("%d", &n);
int k =0;
int max= INT_MIN;
printf("%d  ",n);
if (n>max)
        max=n;
while (n!=1)
{
    if (n%2==1)
        {
        n=3*n+1;
        printf("%d  ",n);
        k++;
        if (n>max)
        max=n;
        }
    else
    {n=n/2;
     printf("%d  ",n);
     k++;
     if (n>max)
        max=n;
    }
      

}

        printf("\n");
        printf("Length = %d, Max = %d  ",k+1, max);
    //while (k!=20)
   // {
       
        //if (n%2==1)
      //  {
         //   n=3*n-1;
         //   printf("%2d",n);
           
       // }
        
       // if (n%2==0)
        //{
           // n=n/2;
           // printf("%2d",n);
           
        //}
         
         //k++;
    //}
    return 0;
}



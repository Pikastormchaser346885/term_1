#include <stdio.h>
#include <limits.h>
int main()
{
int n,i,a,b;
int p=0;
scanf("%d%d", &a, &b);
int r=b-a+1;
i=0;
int A[r];
for (int w=a; w<b+1; w+=1)
{//printf("%d  ",w);

n=w;

int k =0;


while (n!=1)
{
    if (n%2==1)
        {
        n=3*n+1;
        k++;
        }
    else
    {n=n/2;
     k++;
    }

}
k=k+1;
A[i]=k;

i+=1;
        //printf("\n");
        //printf("Length = %d ",k);
         
}

//printf("\n");
//for (int j =0; j<r; j+=1)
//printf("%d ",A[j]);
//printf("\n");


int q=0;
for (int j =0; j<r; j+=1)
{if (A[j]>q)
q=A[j];}
//printf("\n");
//printf("%d  ",q);


int t;

for (int j =0; j<r; j+=1)
{if (A[j]==q)
t=j;}

//printf("%d  ",t);

int u =0;
int B[r];
for (int w=a; w<b+1; w+=1)
{B[u]=w;
u++;
}

//for (int j =0; j<r; j+=1)
//printf("%d ",B[j]);


//printf("%d  ",t);
for (int i=0; i<r; i+=1)
{ if (i==t)
printf("%d  ",B[i]);
}
printf("%d  ",q);
    return 0;
}





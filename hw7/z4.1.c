#include <stdio.h>

struct date
{
    int day, month, year;
};

typedef struct date Date;

int main()
{
    Date a = {15, 5, 1970};
    
    Date* p = &a;
    
    (*p).year++;
    
    printf("%d %d %d\n", a.day, a.month, a.year);
}

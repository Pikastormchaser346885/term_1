#include <stdio.h>

struct date
{
    int day, month, year;
};

typedef struct date Date;

struct movie
{
    char title[50];
    
    float rating;
    
    Date release_date;
};

typedef struct movie Movie;

int main()
{
    Movie a = {"Inception", 8.661, {8, 6, 2010}};
    
    Movie* p = &a;
    
    (*p).rating += 1;
    
    (p->release_date.month) += 1;
}

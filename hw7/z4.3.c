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
    
    struct date release_date;
};

typedef struct movie Movie;

int main()
{
    
    Movie array[3] = {{"Inception", 8.661, {8, 6, 2010}},
    
    {"Green Mile", 9.062, {6, 12, 1999}},
    
    {"Leon", 8.679, {14, 9, 1994}}};
    
    Movie* p = &array[1];

    p->rating += 1;
    
    (p + 2)->release_date.year *= 2;

}

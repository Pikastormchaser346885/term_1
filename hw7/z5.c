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

void print_date(const Date* pd)
{
    printf("%02d.%02d.%04d", pd->day, pd->month, pd->year);
}

void print_movie(const Movie* pm)
{
    printf("Title: %s\nRating: %.2f\nDate: ", pm->title, pm->rating);
    
    print_date(&pm->release_date);
    
    printf("\n");
}

void increase_rating(Movie* p) 
{
    p->rating += 1.0;
}

void change_year_of_movies(Movie* p, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        p[i].year += 1;
    }
}


int main()
{
    Movie a[3] = {{"Inception", 8.661, {8, 6, 2010}},
    
    {"Green Mile", 9.062, {6, 12, 1999}},
    
    {"Leon", 8.679, {14, 9, 1994}}};
    
    increase_rating()
    
    change_year_of_movies(a, 3);
    
    for (int i = 0; i < 3; ++i)
    
        print_movie(&a[i]);
}


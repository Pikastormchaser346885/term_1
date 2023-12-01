#include <stdio.h>
#include <math.h>


struct book
{
    
    char title[50];
    
    int pages;
    
    float price;
};

typedef struct book Book;

int main()
{
    Book b = {"Fahrenheit 451", 400, 700.0};
    
    Book* pb = &b;

    Book** ppb = &pb;

}

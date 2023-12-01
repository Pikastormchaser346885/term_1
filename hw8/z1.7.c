#include <stdio.h>
#include <string.h>

struct book
{
    char title[50];
    
    int pages;
    
    float price;
};


typedef struct book Book;

int main()
{

    Book books[3];


    strcpy(books[0].title, "Don Quixote");
    
    books[0].pages = 1000;
    
    books[0].price = 750.0;


    strcpy(books[1].title, "Oblomov");
    
    books[1].pages = 400;
    
    books[1].price = 250.0;


    strcpy(books[2].title, "The Odissey");
    
    books[2].pages = 500;
    
    books[2].price = 500.0;


    Book* bookPtr = &books[0];


    printf("Title: %s\n", bookPtr->title);
    
    printf("Pages: %d\n", bookPtr->pages);
    
    printf("Price: %.2f\n", bookPtr->price);

    return 0;
}
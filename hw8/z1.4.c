#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    char title[50];
    
    int pages;
    
    float price;
    
};

typedef struct book Book;

void print_book(const Book* book)
{
    printf("Title: %s\n", book->title);
    
    printf("Pages: %d\n", book->pages);
    
    printf("Price: %.2f\n", book->price);
}

int main()
{
    Book* book = (Book*)malloc(sizeof(Book));


    strcpy(book->title, "Don Quixote");
    
    book->pages = 1000;
    
    book->price = 750.0;

    print_book(book);

    free(book);

    return 0;
}
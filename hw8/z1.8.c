#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book 
{
    char* title;
    
    int pages;
    
    float price;
};

typedef struct book Book;

Book* create_book(const char* title, int pages, float price)
{
    Book* new_book = (Book*)malloc(sizeof(Book));

    new_book->title = strdup(title);

    new_book->pages = pages;
    
    new_book->price = price;

    return new_book;
}


void free_book(Book* book)
{
    free(book->title);
    
    free(book);
}

void print_book(const Book* book)
{
    printf("Title: %s\n", book->title);
    
    printf("Pages: %d\n", book->pages);
    
    printf("Price: %.2f\n", book->price);
}

int main() 
{

    Book* my_book = create_book("Don Qiohote", 1000, 750);

    print_book(my_book);

    free_book(my_book);

    return 0;
}
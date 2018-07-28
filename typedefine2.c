#include <stdio.h>
#include <stdlib.h>

typedef unsigned BYTE;
typedef int myInt;
typedef str;

BYTE bi,b2;

// b1 = '7' ; Accept because it unsigned char

typedef struct Books{

char title[50];
char author[50];
char subject[100];
//char subject[100];
int book_id;



}Book;



int main()
{
   // printf("Hello world!\n");

    myInt i = 1;

    Book book;


    strcpy(book.title, "c programing");
    strcpy(book.author, "nuh ali");
    strcpy (book.subject, "c proramming tutorial");
    book.book_id = 6495407;


    printf("book title: %s/n",book.title);
    printf("book title: %s/n",book.author);
    printf("book title: %s/n",book.subject);


    return 0;
}

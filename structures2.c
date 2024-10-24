#include <stdio.h>
#include <string.h>


struct book {
    char title[30];
    char author[30];
    int publication_year;
    char isbn[13];
    float price;
};

int main() {
    
    struct book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99
    };
    printf("Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.isbn);
    printf("Price: %.2f\n", myBook.price);

    
    struct book userBook;

    printf("\nEnter your own book details:\n");

    printf("Enter title: ");
    fgets(userBook.title, sizeof(userBook.title), stdin);
    userBook.title[strcspn(userBook.title, "\n")] = '\0';  

    printf("Enter author: ");
    fgets(userBook.author, sizeof(userBook.author), stdin);
    userBook.author[strcspn(userBook.author, "\n")] = '\0';  

    printf("Enter publication year: ");
    scanf("%d", &userBook.publication_year);

    printf("Enter ISBN: ");
    scanf("%s", userBook.isbn);

    printf("Enter price: ");
    scanf("%f", &userBook.price);

    
    printf("\nUser's Book Details:\n");
    printf("Title: %s\n", userBook.title);
    printf("Author: %s\n", userBook.author);
    printf("Publication Year: %d\n", userBook.publication_year);
    printf("ISBN: %s\n", userBook.isbn);
    printf("Price: %.2f\n", userBook.price);

    return 0;
}
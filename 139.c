//program that maintains a catalog
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_BOOKS 100
typedef struct {
    int bookid;
    char title[100];
    char author[100];
    int noofpages;
    float price;
    int publication_year;
} Book;
Book catalog[MAX_BOOKS];
int num_books = 0;
void addBook();
void displayAllBooks();
void searchBookById(int id);
void searchBooksByAuthor(char *author);
void searchBooksByTitle(char *title);
void updateBookPrice(int id, float new_price);

int main() {
    int choice;

    do {
        printf("\n===== Book Catalog Management System =====\n");
        printf("1. Add new book\n");
        printf("2. Display all books\n");
        printf("3. Search book by ID\n");
        printf("4. Search books by author\n");
        printf("5. Search books by title\n");
        printf("6. Update book price\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:   addBook();  break;
            case 2: displayAllBooks();break;
            case 3: {
                int id;
                printf("Enter book ID to search: ");
                scanf("%d", &id);
                searchBookById(id);
                break;
            }
            case 4: {
                char author[100];
                printf("Enter author name to search: ");
                getchar();
                fgets(author, sizeof(author), stdin);
                author[strcspn(author, "\n")] = '\0';
                searchBooksByAuthor(author);
                break;
            }
            case 5: {
                char title[100];
                printf("Enter title to search: ");
                getchar();
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = '\0';
                searchBooksByTitle(title);
                break;
            }
            case 6: {
                int id;
                float new_price;
                printf("Enter book ID to update price: ");
                scanf("%d", &id);
                printf("Enter new price: ");
                scanf("%f", &new_price);
                updateBookPrice(id, new_price);
                break;
            }
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 0 and 6.\n");
                break;
        }
    } while (choice != 0);
    return 0;
}
void addBook() {
    if (num_books < MAX_BOOKS) {
        Book new_book;
        printf("Enter book details:\n");
        printf("Book ID: ");
        scanf("%d", &new_book.bookid);
        printf("Title: ");
        getchar();
        fgets(new_book.title, sizeof(new_book.title), stdin);
        new_book.title[strcspn(new_book.title, "\n")] = '\0';
        printf("Author: ");
        fgets(new_book.author, sizeof(new_book.author), stdin);
        new_book.author[strcspn(new_book.author, "\n")] = '\0';
        printf("Number of pages: ");
        scanf("%d", &new_book.noofpages);
        printf("Price: ");
        scanf("%f", &new_book.price);
        printf("Publication year: ");
        scanf("%d", &new_book.publication_year);
        catalog[num_books++] = new_book;
        printf("Book added successfully.\n");
    } else {
        printf("Cannot add more books. Catalog is full.\n");
    }
}
void displayAllBooks() {
    if (num_books == 0) {
        printf("No books in the catalog.\n");
    } else {
        printf("===== List of Books =====\n");
        for (int i = 0; i < num_books; ++i) {
            printf("Book ID: %d\n", catalog[i].bookid);
            printf("Title: %s\n", catalog[i].title);
            printf("Author: %s\n", catalog[i].author);
            printf("Number of pages: %d\n", catalog[i].noofpages);
            printf("Price: %.2f\n", catalog[i].price);
            printf("Publication year: %d\n", catalog[i].publication_year);
            printf("--------------------------\n");
        }
    }
}
void searchBookById(int id) {
    int found = 0;
    for (int i = 0; i < num_books; ++i) {
        if (catalog[i].bookid == id) {
            printf("Book found:\n");
            printf("Book ID: %d\n", catalog[i].bookid);
            printf("Title: %s\n", catalog[i].title);
            printf("Author: %s\n", catalog[i].author);
            printf("Number of pages: %d\n", catalog[i].noofpages);
            printf("Price: %.2f\n", catalog[i].price);
            printf("Publication year: %d\n", catalog[i].publication_year);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book with ID %d not found.\n", id);
    }
}
void searchBooksByAuthor(char *author) {
    int found = 0;
    printf("Books by author '%s':\n", author);
    for (int i = 0; i < num_books; ++i) {
        if (strcmp(catalog[i].author, author) == 0) {
            printf("Book ID: %d, Title: %s\n", catalog[i].bookid, catalog[i].title);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found for author '%s'.\n", author);
    }
}
void searchBooksByTitle(char *title) {
    int found = 0;
    printf("Books with title '%s':\n", title);
    for (int i = 0; i < num_books; ++i) {
        if (strcmp(catalog[i].title, title) == 0) {
            printf("Book ID: %d, Author: %s\n", catalog[i].bookid, catalog[i].author);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found with title '%s'.\n", title);
    }
}
void updateBookPrice(int id, float new_price) {
    int found = 0;
    for (int i = 0; i < num_books; ++i) {
        if (catalog[i].bookid == id) {
            catalog[i].price = new_price;
            printf("Price updated successfully for book ID %d.\n", id);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Book with ID %d not found. Price not updated.\n", id);
    }
}

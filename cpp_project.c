#include <stdio.h>
#include <string.h>

struct Book
{
    char name[100];
    char author[100];
    float price;
};

int main()
{
    struct Book books[100];
    int n = 0, choice, i, j, found;
    char searchName[100], searchAuthor[100],ch;
    struct Book temp, updatedBook;

    do
    {
        printf("\n========== Book Management System ==========\n");
        printf("1. Add New Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by Title\n");
        printf("4. Search Book by Author\n");
        printf("5. Update Book Information\n");
        printf("6. Delete a Book\n");
        printf("7. Sort Books by Price\n");
        printf("8. Exit\n");
        printf("===================================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        if(choice==1)
        do
        {
            printf("\nEnter book name: ");
            gets(books[n].name);
            printf("Enter author name: ");
            gets(books[n].author);
            printf("Enter price: ");
            scanf("%f", &books[n].price);
            getchar();
            n++;

            printf("\nDo you want to enter another book? (y/n): ");
            scanf("%c", &ch);
            getchar();
            printf("===================================================\n");
        } while (ch == 'y' || ch == 'Y');


        else if (choice == 2)
        {
            if (n == 0)
                printf("\nNo books available.\n");
            else {
                printf("\n%-5s %-30s %-30s %-10s\n", "No", "Book Name", "Author", "Price");
                for (i = 0; i < n; i++) {
                    printf("%-5d %-30s %-30s %-10.2f\n", i + 1, books[i].name, books[i].author, books[i].price);
                }
            }
            printf("===================================================\n");
        }

        else if (choice == 3)
        {
            printf("\nEnter book title to search: ");
            gets(searchName);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (strcmp(books[i].name, searchName) == 0)
                {
                    printf("\nBook Found!\n");
                    printf("Book: %s\nAuthor: %s\nPrice: %.2f\n", books[i].name, books[i].author, books[i].price);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Book not found.\n");
                printf("===================================================\n");
        }

        else if (choice == 4)
        {
            printf("\nEnter author name to search: ");
            gets(searchAuthor);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (strcmp(books[i].author, searchAuthor) == 0)
                {
                    printf("\nBook Found!\n");
                    printf("Book: %s\nAuthor: %s\nPrice: %.2f\n", books[i].name, books[i].author, books[i].price);
                    found = 1;
                }
            }
            if (!found)
                printf("No books found by that author.\n");
                printf("===================================================\n");

        }

        else if (choice == 5)
        {
            printf("\nEnter book title to update: ");
            gets(searchName);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (strcmp(books[i].name, searchName) == 0)
                {
                    printf("Enter new book name: ");
                    gets(updatedBook.name);
                    printf("Enter new author name: ");
                    gets(updatedBook.author);
                    printf("Enter new price: ");
                    scanf("%f", &updatedBook.price);
                    getchar();
                    books[i] = updatedBook;
                    found = 1;
                    printf("Book updated successfully!\n");
                    break;
                }
            }
            if (!found)
                printf("Book not found.\n");
                printf("===================================================\n");
        }

        else if (choice == 6)
        {
            printf("\nEnter book title to delete: ");
            gets(searchName);
            found = 0;
            for (i = 0; i < n; i++) {
                if (strcmp(books[i].name, searchName) == 0)
                {
                    for (j = i; j < n - 1; j++)
                    {
                        books[j] = books[j + 1];
                    }
                    n--;
                    found = 1;
                    printf("Book deleted successfully!\n");
                    break;
                }
            }
            if (!found)
            {
                printf("Book not found.\n");
            }
            printf("===================================================\n");
        }

        else if (choice == 7)
        {
            if (n == 0)
            {
                printf("\nNo books to sort.\n");
            }
            else
            {
                for (i = 0; i < n - 1; i++)
                {
                    for (j = i + 1; j < n; j++)
                    {
                        if (books[i].price > books[j].price)
                        {
                            temp = books[i];
                            books[i] = books[j];
                            books[j] = temp;
                        }
                    }
                }
                printf("\nBooks sorted by price (low to high).\n");
            }
            printf("===================================================\n");
        }

        else if (choice == 8)
        {
            printf("\nExiting program... Goodbye!\n");
            printf("===================================================\n");
		}

        else
		{
            printf("\nInvalid choice. Please try again.\n");
       		printf("===================================================\n");
		}


    } while (choice != 8);

    return 0;
}

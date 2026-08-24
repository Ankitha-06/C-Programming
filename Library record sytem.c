#include <stdio.h>
#include <string.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Book
{
    int book_id;
    char book_name[50];
    char author[50];

    struct Date issue_date;
    struct Date return_date;
};

struct Library
{
    int member_id;
    char member_name[50];

    struct Book book;
};

int main()
{
    struct Library l[100];
    int n, i;

    printf("Enter number of library records: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n========== Record %d ==========\n", i + 1);

        printf("Enter Member ID: ");
        scanf("%d", &l[i].member_id);

        printf("Enter Member Name: ");
        scanf(" %[^\n]", l[i].member_name);

        printf("Enter Book ID: ");
        scanf("%d", &l[i].book.book_id);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", l[i].book.book_name);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", l[i].book.author);

        printf("\nEnter Issue Date\n");
        printf("Day: ");
        scanf("%d", &l[i].book.issue_date.day);

        printf("Month: ");
        scanf("%d", &l[i].book.issue_date.month);

        printf("Year: ");
        scanf("%d", &l[i].book.issue_date.year);

        printf("\nEnter Return Date\n");
        printf("Day: ");
        scanf("%d", &l[i].book.return_date.day);

        printf("Month: ");
        scanf("%d", &l[i].book.return_date.month);

        printf("Year: ");
        scanf("%d", &l[i].book.return_date.year);
    }

    printf("\n\n========== LIBRARY RECORDS ==========\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRecord %d\n", i + 1);

        printf("Member ID       : %d\n", l[i].member_id);
        printf("Member Name     : %s\n", l[i].member_name);

        printf("Book ID         : %d\n", l[i].book.book_id);
        printf("Book Name       : %s\n", l[i].book.book_name);
        printf("Author          : %s\n", l[i].book.author);

        printf("Issue Date      : %02d-%02d-%04d\n",
               l[i].book.issue_date.day,
               l[i].book.issue_date.month,
               l[i].book.issue_date.year);

        printf("Return Date     : %02d-%02d-%04d\n",
               l[i].book.return_date.day,
               l[i].book.return_date.month,
               l[i].book.return_date.year);
    }

    return 0;
}
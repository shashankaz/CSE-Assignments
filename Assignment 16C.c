//Write a program that compares two given dates. To store date use structure say date that contains three members namely date, month and year. If the dates are equal then display message as "Equal" otherwise "Unequal".

#include <stdio.h>
#include <stdbool.h>

struct date 
{
    int day;
    int month;
    int year;
};

int main() 
{
    struct date date1, date2;

    printf("Enter the first date (DD MM YYYY): ");
    scanf("%d %d %d", & date1.day, & date1.month, & date1.year);
    printf("Enter the second date (DD MM YYYY): ");
    scanf("%d %d %d", & date2.day, & date2.month, & date2.year);

    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) 
    {
        printf("Equal\n");
    } 
    else 
    {
        printf("Unequal\n");
    }

    return 0;
}

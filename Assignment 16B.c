//There is a structure called employee that holds information like employee code, name, date of joining. Write a program to create an array of the structure and enter some data into it. Then ask the user to enter current date. Display the names of those employees whose tenure is 3 or more than 3 years according to the given current date.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct employee 
{
    int empCode;
    char name[50];
    int dojDay;
    int dojMonth;
    int dojYear;
};

int main() 
{
    struct employee employees[20];

    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", & numEmployees);
    for (int i = 0; i < numEmployees; i++) 
    {
        printf("Enter information for employee %d:\n", i + 1);
        printf("Employee code: ");
        scanf("%d", & employees[i].empCode);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Date of joining (DD MM YYYY): ");
        scanf("%d %d %d", & employees[i].dojDay, & employees[i].dojMonth, & employees[i].dojYear);
    }

    int currDay, currMonth, currYear;
    printf("\nEnter the current date (DD MM YYYY): ");
    scanf("%d %d %d", & currDay, & currMonth, & currYear);

    printf("\nEmployees with tenure of 3 or more years:\n");
    for (int i = 0; i < numEmployees; i++) 
    {
        int years = currYear - employees[i].dojYear;
        int months = currMonth - employees[i].dojMonth;
        int days = currDay - employees[i].dojDay;
        bool isEligible = false;
        if (years > 3) 
        {
            isEligible = true;
        } 
        else if (years == 3 && months >= 0 && days >= 0) 
        {
            isEligible = true;
        }
        if (isEligible) 
        {
            printf("%s\n", employees[i].name);
        }
    }

    return 0;
}

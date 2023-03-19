//A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match. Create an array of structure to hold records of 20 such cricketer and then write a program to read these records and arrange them in ascending order by average runs.

#include <stdio.h>
#include <string.h>

struct Cricketer 
{
    char name[50];
    int age;
    int numTests;
    float avgRuns;
};

void swap(struct Cricketer * xp, struct Cricketer * yp) 
{
    struct Cricketer temp = * xp;
    * xp = * yp;
    * yp = temp;
}

void sortCricketers(struct Cricketer cricketers[], int n) 
{
    int i, j;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (cricketers[j].avgRuns > cricketers[j + 1].avgRuns) 
            {
                swap( & cricketers[j], & cricketers[j + 1]);
            }
        }
    }
}

int main() 
{
    struct Cricketer cricketers[20];

    for (int i = 0; i < 20; i++) 
    {
        printf("Enter information for cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", cricketers[i].name);
        printf("Age: ");
        scanf("%d", & cricketers[i].age);
        printf("Number of tests played: ");
        scanf("%d", & cricketers[i].numTests);
        printf("Average runs scored: ");
        scanf("%f", & cricketers[i].avgRuns);
    }

    sortCricketers(cricketers, 20);

    printf("Cricketers sorted by average runs:\n");
    for (int i = 0; i < 20; i++) 
    {
        printf("%d. %s, Age: %d, Tests played: %d, Avg. runs: %.2f\n",
            i + 1, cricketers[i].name, cricketers[i].age,
            cricketers[i].numTests, cricketers[i].avgRuns);
    }

    return 0;
}

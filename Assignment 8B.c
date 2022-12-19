/*Write a program to print a pyramid with odd values in each row. For
example: (for n = 3)
*
* * *
* * * * *
*/

#include <stdio.h>
int main()
{
    int i, space, rows, k = 0;
    
    printf("Enter the Number of Rows: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++, k = 0)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        
        while (k != 2 * i - 1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
    return 0;
}
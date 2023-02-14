//Write a program to compute the sum of odd elements present in any array.

#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 != 0) 
        {
            sum += arr[i];
        }
    }

    printf("The Sum of Odd Elements in the Array is %d\n", sum);

    return 0;
}

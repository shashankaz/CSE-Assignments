//Write a program to print unique elements in any given array.

#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 3, 4, 1, 3, 5, 2, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique Elements in the Array :\n");

    for (int i = 0; i < n; i++) 
    {
        int unique = 1;

        for (int j = 0; j < i; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                unique = 0;
                break;
            }
        }

        if (unique) 
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

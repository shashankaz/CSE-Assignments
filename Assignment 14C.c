//Write a program to reverese an array using pointers by defining a function named 'rev'

#include <stdio.h>

void rev(int *arr, int size);

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Original Array : ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rev(arr, 5);

    printf("Reversed Array : ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void rev(int *arr, int size) 
{
    int temp, i;

    for (i = 0; i < size / 2; i++) 
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }
}

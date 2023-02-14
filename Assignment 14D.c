//Write a program to search an element in an array using pointer by defining a function named ''search'

#include <stdio.h>

int search(int *arr, int size, int value);

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int value = 3;
    int index = search(arr, size, value);

    if (index == -1) 
    {
        printf("Element Not Found in Array.\n");
    } else {
        printf("Element Found at Index %d.\n", index);
    }

    return 0;
}

int search(int *arr, int size, int value)
{
    int i;

    for (i = 0; i < size; i++) 
    {
        if (*(arr + i) == value) 
        {
            return i;
        }
    }

    return -1;
}

//Write a program to copy elements of one array to another using pointers. Define a function 'copy' to perform the operation.

#include <stdio.h>

void copy(int *first, int *second, int size);

int main() 
{
    int first[5] = {1, 2, 3, 4, 5};
    int second[5];

    copy(first, second, 5);

    printf("First Array : ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", first[i]);
    }
    printf("\n");

    printf("Second Array : ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", second[i]);
    }
    printf("\n");

    return 0;
}

void copy(int *first, int *second, int size) 
{
    int i;

    for (i = 0; i < size; i++) 
    {
        *(second + i) = *(first + i);
    }
}

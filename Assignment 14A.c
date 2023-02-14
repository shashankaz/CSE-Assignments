//Write a program to swap two numbers using pointers. (Call by reference)

#include <stdio.h>

void swap(int *a, int *b);

int main() 
{
    int x, y;

    printf("Enter the First Number : ");
    scanf("%d", &x);

    printf("Enter the Second Number : ");
    scanf("%d", &y);

    printf("Before Swapping : x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swapping : x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) 
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

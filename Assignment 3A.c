//Write a program to find whether a given input is even or odd number.

#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Enter a Number : \n");
    scanf("%d",&x);
    
    y = (x%2);
    
    if(y==1)
        printf("%d is ODD Number",x);
    else
        printf("%d is EVEN Number",x);

    return 0;
}

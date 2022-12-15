//Write a program to print the sum of first 'n' even numbers. 
#include <stdio.h>

int main()
{
    int n,i = 2,sum = 0;
    printf("Enter the value of n : "); 
    scanf("%d", &n);
    
    while(i<=(2*n))
    {
        sum = sum+i;
        i=i+2;
    }
    
    printf("Sum of %d Even Numbers is %d",n,sum);
    
    return 0;
}
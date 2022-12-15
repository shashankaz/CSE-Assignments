//Write a program to print first 'n' numbers not divisible by 2, 3, and 5.

#include <stdio.h>
int main()
{
    int n,i;
    
    printf("Enter the value of n : "); 
    scanf("%d", &n);
    
    for(i=30;i<=(30*n);i=i+30)
    {
        printf("%d\n",i);
    }
    
    return 0;
}

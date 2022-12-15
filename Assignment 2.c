//Write a program to take five integer inputs and compute their average.
//Convert the average into a 2-decimal point round floating figure. Display the output.

#include<stdio.h>

int main()
{
    int a, b, c, d, e;
    float avg;
    
    printf("Enter 1st Number : \n");
    scanf("%d", &a);
    printf("Enter 2nd Number: \n");
    scanf("%d", &b);
    printf("Enter 3rd Number : \n");
    scanf("%d", &c);
    printf("Enter 4th Number : \n");
    scanf("%d", &d);
    printf("Enter 5th Number: \n");
    scanf("%d", &e);
  
    avg = (a+b+c+d+e)/5;
  
    printf("The Average of %d, %d, %d, %d, %d is %.2f", a, b, c, d, e, avg);
  
    return 0;
}
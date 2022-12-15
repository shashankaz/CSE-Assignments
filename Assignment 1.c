//Write a program to take five integer inputs and compute their average.
//Convert the average into a 2-decimal point round floating figure. Display the output.

#include<stdio.h>

int main()
{
    int a = 40, b = 20;
    int add, sub, mul, divide, mod;
    
    add = a+b;
    sub = a-b;
    mul = a*b;
    divide = a/b;
    mod = a%b;
    
    printf("Addition Value is : %d\n", add);
    printf("Subtraction Value is : %d\n", sub);
    printf("Multiplication Value is : %d\n", mul);
    printf("Division Value is : %d\n", divide);
    printf("Modulus Value is : %d\n", mod);
    
    
    return 0;
}

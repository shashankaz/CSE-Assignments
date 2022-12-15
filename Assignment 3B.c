/*Write a program to enter the marks of 5 subjects, 
compute the average, and find the grade obtained by the student.
75<=Grade A<=100
65<=Grade B <75
55<=Grade C <65
45<=Grade D <55
40<= Pass <45
Fail; otherwise.*/

#include <stdio.h>

int main()
{
    int a,b,c,d,e,avg;
    printf("Enter 1st Subject:\n");
    scanf("%d",&a);
    printf("Enter 2nd Subject:\n");
    scanf("%d",&b);
    printf("Enter 3rd Subject:\n");
    scanf("%d",&c);
    printf("Enter 4th Subject:\n");
    scanf("%d",&d);
    printf("Enter 5th Subject:\n");
    scanf("%d",&e);
    
    avg=((a+b+c+d+e)/5);
    
    if(avg<=100 && avg>=75)
        printf("Grade A");
    else if(avg<75 && avg>=65)
        printf("Grade B");
    else if(avg<65 && avg>=55)
        printf("Grade C");
    else if(avg<55 && avg>=45)
        printf("Grade D");
    else if(avg<45 && avg>=40)
        printf("Grade E");
    else
        printf("Fail");
    
    return 0;
}
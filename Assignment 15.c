//Write a program to store 5 strings using an array of pointers and display those strings.

#include<stdio.h>
#define MAX 5
int main()
{
    char *str[MAX]={"Meta" ,"Amazon", "Apple", "Netflix", "Google"};
    
    printf("Output of the String is : ");
    
    for(int i=0;i<5;i++)
    {
        printf("%s ", str[i]);
    }
}

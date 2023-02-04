//Write a program in C to find the length of a string without using library functions

#include <stdio.h>
int main()
{
    char s[100];
    int i;
    
    printf("Enter a String : ");
    scanf("%s", s);
    
    for(i=0;s[i]!='\0';++i);
    printf("Length of String: %d", i);
    
    return 0;
    
}

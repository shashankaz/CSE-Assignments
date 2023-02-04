//Write a program in C to convert a string to lowercase without using library functions

#include<stdio.h>
#include<string.h>

int main()
{
    char s[30];
    printf("Enter your String in Upper Case : ");
    scanf("%[^\n]", s);
    int i=0;
    
    while (s[i]!='\0')
    {
        if (s[i]>64&&s[i]<91)
        s[i]+=32;
        
        i++;
    }
    
    printf("String in Lower Case : %s", s);
}

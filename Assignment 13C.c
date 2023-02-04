//Write a program in C to print individual characters of strings in reverse order without using library functions

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int l,i;
    
    printf("Enter a string to be reversed :\n");
    fgets(str, sizeof str, stdin);
	l=strlen(str);
	printf("The characters of the string in reverse are : \n");
    for(i=l;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}

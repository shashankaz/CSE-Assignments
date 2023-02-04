//Write a program in C to count the total number of words in a string without using library functions

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i=0, wrd=1;
    
    printf("Enter the String : ");
    fgets(str, sizeof str, stdin);	

    while(str[i]!='\0')
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
        {
            wrd++;
        }
        i++;
    }

    printf("Total Number of Words in the String is %d", wrd-1);
    
    return 0;
}

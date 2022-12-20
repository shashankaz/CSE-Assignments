/*Write a program to print the following pattern using looping concept. If user enters value of 'n' = 5. Here n defines the depth of pattern.
    $
   $ $
  $ $ $
 $ $ $ $
$ $ $ $ $*/

#include <stdio.h>
int main() 
{
    int n,i,j,k;
    
    printf("Enter a Number : "); 
    scanf("%d", &n);
    
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(j<i)
            printf(" ");
            
            else
            {
                printf("$ ");
                j=j+1;
            }
        }
    
        for(k=n;k>i;k=k-2)
        {
            printf("$ ");
        }
    
        printf("\n");
    }
    return 0;
}
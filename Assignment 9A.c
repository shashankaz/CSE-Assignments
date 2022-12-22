//Write a program to copy the elements from one array to another. Let the size of both arrays be 10.

#include <stdio.h>  
   
int main()  
{  
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  
      
    int length = sizeof(array1)/sizeof(array1[0]);  
      
    int array2[length];  
      
    for (int i = 0; i < length; i++) 
    {   
        array2[i] = array1[i];   
    }    
      
    printf("Elements of Original Array : ");  
    for (int i = 0; i < length; i++) 
    {   
        printf("%d ", array1[i]);  
    }  
      
    printf("\n");  
      
    printf("Elements of New Array : ");  
    for (int i = 0; i < length; i++) 
    {   
        printf("%d ", array2[i]);  
    }  
    return 0;  
} 
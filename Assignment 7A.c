/*Write a program to enter user ID and password using nested switch. 
If the user enters correct ID and password, display the message "Welcome ID", 
otherwise give the message incorrect "user ID or password".*/

#include <stdio.h>

int main()
{
    int id,pass;
    
    printf("Please Enter your ID : ");
    scanf("%d",&id);
    printf("Please Enter your Password : ");
    scanf("%d",&pass);
    
    switch(id)
    {
        case 101:
        switch(pass)
        {
            case 602:
            printf("Welcome 101");
            break;
            
            default:
            printf("Incorrect User ID or Password");
            break;
        }
        break;
        
        case 102:
        switch(pass)
        {
            case 880:
            printf("Welcome 102");
            break;
            
            default:
            printf("Incorrect User ID or Password");
            break;
        }
        break;
        
        case 103:
        switch(pass)
        {
            case 280:
            printf("Welcome 103");
            break;
            
            default:
            printf("Incorrect User ID or Password");
            break;
        }
        break;
        
        case 104:
        switch(pass)
        {
            case 522:
            printf("Welcome 104");
            break;
            
            default:
            printf("Incorrect User ID or Password");
            break;
        }
        break;
        
        case 105:
        switch(pass)
        {
            case 661:
            printf("Welcome 105");
            break;
            
            default:
            printf("Incorrect User ID or Password");
            break;
        }
        break;
    }

    return 0;
}

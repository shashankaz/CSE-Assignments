/*Write a program using Switch Case:
Press 1: To print the details of the student such as roll number;
Press 2: Print total marks obtained (5 subject);
Press 3: Print % of marks obtained by student
Press 4: Print Grade of the student
Default: Wrong input*/

#include <stdio.h>

int main()
{
    int roll,mark_1,mark_2,mark_3,mark_4,mark_5,total,percent,x;
    printf("Enter the Roll No. of the Student : ");
    scanf("%d",&roll);
    printf("Enter Marks of 1st Subject : ");
    scanf("%d",&mark_1);
    printf("Enter Marks of 2nd Subject : ");
    scanf("%d",&mark_2);
    printf("Enter Marks of 3rd Subject : ");
    scanf("%d",&mark_3);
    printf("Enter Marks of 4th Subject : ");
    scanf("%d",&mark_4);
    printf("Enter Marks of 5th Subject : ");
    scanf("%d",&mark_5);
    
    total = mark_1+mark_2+mark_3+mark_4+mark_5;
    percent = (total)/5;
    
    printf("Press 1: To print the details of the student such as roll number \n");
    printf("Press 2: Print total marks obtained (5 subject) \n");
    printf("Press 3: Print %% of marks obtained by student \n");
    printf("Press 4: Print Grade of the student\n");
    scanf("%d",&x);
    
    switch(x){
    case 1:
        {
            printf("The Roll No. of the Student is %d",roll);
            break;
        }
    case 2:
        {
            printf("Total Marks Obtained is %d",total);
            break;
        }
    case 3:
        {
            printf("%% of Marks Obtained is %d",percent);
            break;
        }
    case 4:
        {
            if(percent<=100 && percent>75)
                printf("Grade A");
            else if(percent<=75 && percent>65)
                printf("Grade B");
            else if(percent<=65 && percent>55)
                printf("Grade C");
            else if(percent<=55 && percent>45)
                printf("Grade D");
            else if(percent<=45 && percent>40)
                printf("Pass");
            else
                printf("Fail");
            break;
        }
    default:
        printf("Wrong Input");
    }

    return 0;
}
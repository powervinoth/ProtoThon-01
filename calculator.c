/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>
int main()
{
    float a=0,b=0,c=0;
    int user_choice=0;
    while(1)
    {
    printf("\nchoose the operation to be performed :\n ");
    printf("1 for add\n");
    printf("2 for sub\n");
    printf("3 for mul\n");
    printf("4 for div\n");
    scanf("%d",&user_choice);
    switch(user_choice)
    {
        case 1:
            printf("enter the 1st number :\n ");
            scanf("%f",&a);
            printf("enter the 2st number :\n ");
            scanf("%f",&b);
            //c=a+b;
            printf("sum result is %f",a+b);
            break;
        case 2:
            printf("enter the 1st number :\n ");
            scanf("%f",&a);
            printf("enter the 2st number :\n ");
            scanf("%f",&b);
            printf("difference result is %f",a-b);
            break;
        case 3:
            printf("enter the 1st number :\n");
            scanf("%f",&a);
            printf("enter the 2st number :\n ");
            scanf("%f",&b);
            printf("product result is %f",a*b);
            break;    
        case 4:
            printf("enter the 1st number :\n ");
            scanf("%f",&a);
            printf("enter the 2st number :\n ");
            scanf("%f",&b);
            if(b==0||b==0.0||b==0.00)
            {
                printf("you are not supposed to enter zero in any form for divisor\n");
            }
            else
            {
            
            printf("division result is %f",a/b);
            }
            break;    
        default:
            printf("invalid choice");
    }
    }
    
    
    
    return 0;
}

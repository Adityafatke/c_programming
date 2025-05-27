
#include<stdio.h>
int main()
{
int month;
printf("enter a mont number");
scanf("%d",&month);

switch(month)
{
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: 
        printf("30 days");
        break;

        case 2:
        printf("28/29 days");
        break;

        
         case 6: printf("31 days");
         case 9: printf("31 days");
        case 11: printf("31 days");
        break;
       
        default:printf("invalid month number");
        break;
        
        
    }
}

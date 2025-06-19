
#include<stdio.h>

    int main()
{
int a,b,ch;
printf("enter a two number");
scanf("%d%d",&a,&b);
printf("\n1 addition");
printf("\n2 substraction");
printf("\n3 multiplication");
printf("\n4 division");
printf("\nenter a choice which operation perform");
scanf("%d",&ch);

switch(ch)
{
    case 1:printf("addition=%d%d",a+b);
    break;

    case 2:printf("subtraction=%d",a-b);
    break;
    case 3:printf("multiplication=%d",a*b);
    break;
    case 4:printf("division=%d",a/b);
    break;

    default:printf("invalid case");
    break;

}
}

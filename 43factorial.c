#include<stdio.h>
int main()
{
int n,i,half=0;
printf("enter a number");
scanf("%d",&n);
half=n/2;
for(i=1;i<=half;i++)
{
    if(n%i==0)
    printf("\n%d",i);
}
printf("\n%d",n);

}
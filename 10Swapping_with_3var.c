#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a two number");
	scanf("%d%d",&a,&b);
	printf("\nbefore swapping a=%d \nb=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swapping a=%d \n b=%d",a,b);
}

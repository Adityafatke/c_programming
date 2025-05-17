#include<stdio.h>
int main()
{
	int age,one;
	printf("enter your age :");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\nnow you are able to apply for voter id card.(enter only single number(1/2/3))");
		printf("\n1)you have voter id card");
		printf("\n2)you don't have voter id card");
		printf("\n3)you want to renew your own voter id card");
		printf("\nselect one sr no of problem :");
	
	scanf("%d",&one);
	if(1==one)
	{
		printf("\n if you have voter id card then you dont need to worry about new voter id card");
		
	}
	else if(2==one)
	{
		printf("\n if you dont have any voter id card to you need to apply for new voter id card");
		printf("please visit official website of election commition visit us : https://voters.eci.gov.in/");
	}
	else if(3==one)
	{
		printf("\n if you want renew visit us : https://voters.eci.gov.in/");
	}
	else
	{
		printf("\nplease select/enter correct number");
	}
}
else
{
	printf("\nnow you are not able to apply for voter id card because your age is less than 18"); ;
}
		
	}


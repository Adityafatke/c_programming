#include<stdio.h>
int main()
{
	int eid;
	char ename[100];
	float bs,tax,hra,da,totalsalary;
	printf("Enter a employee details:");
	printf("eid :");
	scanf("%d",&eid);
	printf("name :");
	scanf("%s",&ename);
	printf("basic salary :");
	scanf("%f",&bs);
	printf("DA(%%) :");
	scanf("%f",&da);
	printf("tax(%%) :");
	scanf("%f",&tax);
	printf("hra (%%):");
	scanf("%f",&hra);
	
	totalsalary=bs=(bs*(da+hra-tax)/100);
	printf("total salary :%f",totalsalary);
		
}

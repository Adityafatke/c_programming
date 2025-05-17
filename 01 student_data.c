#include<stdio.h>
int main()
{
	int roll;
	char name[100],college[100],email[100],contact[100],dob[100],s1[100],s2[100],s3[100];
	float total,average,m1,m2,m3;
	printf("enter a student roll");
	scanf("%d",&roll);
	printf("enter a student name");
	scanf("%s",&name);
	printf("enter a student email");
	scanf("%s",&email);
	printf("enter a student college");
	scanf("%s",&college);
	printf("enter a student contact");
	scanf("%s",&contact);
	printf("enter a student dob");
	scanf("%s",&dob);
	printf("enter a student subject");
	scanf("%s",&s1);
	printf("enter a student subject");
	scanf("%s",&s2);
	printf("enter a student subject");
	scanf("%S",&s3);
	printf("enter a student marks");
	scanf("%f",&m1);
	printf("enter a student mark");
	scanf("%f",&m2);
	printf("enter a student mark");
	scanf("%f",&m3);
	
	total=m1+m2+m3;
	average=total/3;
	printf("student roll   :%d",roll);
	printf("student name   :%s",name);
	printf("student email  :%s",email);
	printf("student college:%s",college);
	printf("student contact:%s",contact);
	printf("student dob    :%s",dob);
	printf("student subject:%s",s1);
	printf("student subject:%s",s2);
	printf("student subject:%s",s3);
	printf("student mark   :%f",m1);
	printf("student mark   :%f",m2);
	printf("student mark   :%f",m3);
	printf("student total  :%f",total);
	printf("student average:%f",average);
	
	
	
}

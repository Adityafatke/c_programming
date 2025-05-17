
#include<stdio.h>
int main()
{
    int roll;
    char name[100],s1[100],s2[100],s3[100];
    float m1,m2,m3,total,avg;
    char grade;
        printf("enter a student details");
        printf("\nroll no");
        scanf("%d",&roll);
        printf("enter a name");
        scanf("%s",&name);
        printf("subject name:");
        scanf("%s",&s1);
        printf("enter a subject mark s1 :");
        scanf("%f",&m1);
        printf("subject name:");
        scanf("%s",&s2);
        printf("enter a  subject mark s2 :");
        scanf("%f",&m2);
        printf("subject name:");
        scanf("%s",&s3);
        printf("enter a  subject mark s3 :");
        scanf("%f",&m3);

       total=m1+m2+m3;
       avg=total/3;
        if(avg<100 && avg>=90 )
         grade='o';
       else if(avg>=80)
        grade='A';
         else if(avg>=70)
        grade='B';
          else  if(avg>=60)
        grade='C';
         else if(avg>=50)
        grade='D';
        else if(avg>=35)
        grade='E';
         else
        grade='F'; 

         printf("\n---------------------------*result*--------------------------");
         printf("\n\t\troll no of student:%d",roll);
         printf("\n\t\tName of student   :%s",name);
         printf("\n\t\tsubject 1         :%s",s1);
         printf("\n\t\tmarks             :%.2f",m1);
         printf("\n\t\tsubject 2         :%s",s2);
         printf("\n\t\tmarks             :%.2f",m2);
         printf("\n\t\tsubject 3         :%s",s3);
         printf("\n\t\tmarks             :%.2f",m3);
         printf("\n\t\ttotalmarks        :%.2f",total);
         printf("\n\t\taverage marks     :%.2f",avg);
         printf("\n\t\tgrage is          :%c",grade);
         printf("\n---------------------------*result*--------------------------");

}








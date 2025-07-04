#include<stdio.h>
struct student
{
    int roll;
    char name[100];
    float marks;
    
};

int main()
{
     struct student   s;

    printf("enter a roll");
    scanf("%d",&s.roll);
    
    printf("enter a name");
    scanf("%s",&s.name);
    
    printf("enter a marks");
    scanf("%f",&s.marks);

    printf("given data");
    printf("\nroll no%d",s.roll);
    printf("\nname%s",s.name);
    printf("\nmarks%.2f",s.marks);    
}
 
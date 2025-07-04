// id sal name
#include<stdio.h>

struct employee
{
    int id;
    char name[100];
    float salary;
};

int main()
{
    struct employee e;
    
    printf("enter eid");
    scanf("%d",&e.id);
    
    printf("enter name");
    scanf("%s",&e.name);
    
    printf("enter salary");
    scanf("%f",&e.salary);

    printf("\nemp id =%d",e.id);
    
    printf("\nemp  =name%s",e.name);
    
    printf("\nemp id =%.2f",e.salary);
    
}

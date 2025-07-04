#include<stdio.h>
#include<stdlib.h>

struct student{

    int roll;
    char *name;
    int mark;
};

int main()
{
    struct student *s;
   // s=(struct student*)malloc(20);
   s = (struct student *)malloc(sizeof(struct student));

   printf("%d\n",sizeof(s));    //4 byte

   s->mark=30;
   s->name="shubz";
   s->roll=55;
   printf("%d",s->mark);
   printf("%d",s->roll);
   printf("%s",s->name);
}
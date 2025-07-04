#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    printf("enter a your name");
    scanf("%s",ch);         //he space nanter ch all statement ignore karat
    // gets(ch);            //he all string input accept krt including space
    // printf("%s",ch);

 for(int i=0;i<ch[i]!='\0';i++)
    {
      printf("\n%c",ch[i]);
    }
}
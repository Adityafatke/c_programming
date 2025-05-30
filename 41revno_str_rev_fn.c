#include<stdio.h>
#include<string.h>
int main() 
{
    char no[100];
    printf("enter a no");
    scanf("%s",&no);
    printf("Reverse number =%s",strrev(no));
}

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a three value");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>c)
    {
        printf("grater no is a=%d",a);

    }
    else if(b>c&&b>=a)
    {
      printf("grater no=%d",b);
    }
    else{

        printf(" grater no is c =%d",c);
    
    }
}
#include<stdio.h>
#include<stdlib.h>
void accept(int *p,int n)
{
int i;
printf("enter a element");
for(i=0;i<n;i++)
scanf("%d",&p[i]);

}
void display( int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d",p[i]);
}
int main()
{
    int *p,i,n;
    printf("enter a n");
    scanf("%d",&n);

    p=(int*)calloc(n,sizeof(int));
   accept(p,n);
   printf("given number are\n");
   display(p,n);
}
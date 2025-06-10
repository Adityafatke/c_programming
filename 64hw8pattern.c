#include<stdio.h>
int main()
{
    int i,j,n,p=5;
    printf("enter a number");
    scanf("%d",&n);

//  5
//  5 4
//  5 4 3
//  5 4 3 2
//  5 4 3 2 1
    for ( i = 1; i <=n; i++)   
   {
      for ( j = 1; j<=i; j++)
      {
        printf(" %d",p);
        p--;
      }
      printf("\n");
       p=5;
      
    }
    
}
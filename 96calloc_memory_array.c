#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("enter a n");
    scanf("%d",&n);

  p=(int*)calloc(n,sizeof(int));  //it means ki pointer p la n chi ji value aahe tevdhi memory block allocate kara data type is integer

  printf("enetr a array element");
  for ( i = 0; i < n; i++)
  scanf("%d",&p[i]);

  printf("given data=\n");
  for ( i = 0; i < n; i++)
  {
    printf("%d",p[i]);
  }
  


  

    
}
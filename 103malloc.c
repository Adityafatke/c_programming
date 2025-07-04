#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    printf("enter a n");

    p=(int*)malloc(8);

    free(p);

    printf("%d",sizeof(int));
    printf("\nSize of pointer p: %zu bytes\n", sizeof(p));
  }
  


  

    

#include<stdio.h>
int main()
{
    int start,end,x;
    printf("\n enter a start and end number=");
    scanf("%d%d",&start,&end);
    for(start;start<=end;start++)
    (start%2==0)?printf("\neven no =%d",start):printf("");

    /*or
    start=(start%2==0)?start:start++;
    for(;start<=end;start++)
    pf("even no =%d",start);
    */

    
    
}
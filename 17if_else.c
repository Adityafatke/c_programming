          
#include<stdio.h>
int main()
{
    int h,m,s;
    printf("enter a hours:");
    scanf("%d",&h);
     printf("enter a minutes:");
    scanf("%d",&m);
     printf("enter a second:");
    scanf("%d",&h);

    if(h>=0&&h<24)
    {
        if(m>=0&&m<60)
        {
          if(s>=0&&s<60)   
          printf("time is valid")

          }
          else
          printf("minutes are invalid")
        }
        printf("hours are invalid")
    }

}

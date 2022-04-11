#include<stdio.h>
int main()
{

    int c,a,i,x=0,y=0;
    scanf("%d",&c);
    for(i=0;i<c;i++)
        {
            scanf("%d",&a);
          if(a>=10 && a<=20) x++;
          else y++;
        }
    printf("%d in\n",x);
    printf("%d out\n",y);


   return 0;
}

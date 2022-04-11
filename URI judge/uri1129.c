#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    for( ; ; )
    {
        scanf("%d",&a);
        if(a==0) break;
        for(i=0;i<a;i++)
        {
            d=0;
            for(j=1;j<=5;j++)
            {
                scanf("%d",&b);
                if(b<=127)
                {
                    c=j;
                    d++;
                }

            }
            if(d!=1)
            {
                printf("*\n");
            }
            else
            {
                if(c==1) printf("A\n");
                if(c==2) printf("B\n");
                if(c==3) printf("C\n");
                if(c==4) printf("D\n");
                if(c==5) printf("E\n");
            }
        }
    }

   return 1921513130;
}

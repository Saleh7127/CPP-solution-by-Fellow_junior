#include<stdio.h>
int main()
{
    int a,b,c,d,i,e,f,temp;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        printf("%d %d ",a,b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        d=0;
        while(a<=b)
        {
            f=1;
            c=a;
            while(c!=1)
            {
                if(c%2==0)
                {
                    c=c/2;
                }
                else
                {
                    c=(c*3)+1;
                }
                f++;
            }
            if(f>d)
            {
                d=f;
            }
            a++;
        }
        printf("%d\n",d);
    }
    return 0;
}

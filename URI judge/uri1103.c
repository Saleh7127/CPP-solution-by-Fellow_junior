#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    for( ; ; )
    {
        scanf("%d %d %d %d",&a,&c,&b,&d);
        if(a==0 && c==0 && b==0 && d==0)
            break;
        if(a==0)
        {
            e=24*60+c;
        }
        if(a!=0)
        {
            e=a*60 + c;
        }
        if(b==0)
        {
            f=24*60+d;
        }
        if(b!=0)
        {
            f=b*60 + d;
        }
        if(f>e)
            printf("%d\n",f-e);
        else
        {
            g=24*60-(e-f);
            printf("%d\n",g);
        }

    }
    return 0;
}

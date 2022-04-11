#include<stdio.h>
int main()
{
    int a;
    int i,b,c[1001],d=0,e=0;
    double av;
    scanf("%d",&a);
    while(a>0)
    {
        av=0;
        e=0;
        d=0;
        scanf("%d",&b);
        for(i=0; i<b; i++)
        {
            scanf("%d",&c[i]);
            d+=c[i];
        }
        av=d/b;
        for(i=0; i<b; i++)
        {
            if(c[i]>av)
                e++;
        }
        double f=(e*100.00)/(b*1.00);
        printf("%.3lf%%\n",f);
        a--;
    }
     return 0;
}

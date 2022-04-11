#include<stdio.h>
int main()
{
    double m[12][12],a=0.0;
    char c[5];
    int i,j,k,l,n=0;
    scanf("%s",&c);
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++)
        {
            scanf("%lf",&m[i][j]);
        }
    }
    for(k=0;k<=11;k++)
    {
        for(l=0;l<=n;l++)
        {
            {
                a = a + m[k][l];
            }
        }
         n++;
    }
    if(c[0]=='S') printf("%.1lf\n",a);

    else if(c[0]=='M')
    {
        a=a/66.0;
        printf("%.1lf\n",a);
    }


    return 0;

}

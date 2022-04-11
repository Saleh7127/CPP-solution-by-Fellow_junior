#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        int b,c=0,d=0,e,f,i,j,l;
        scanf("%d",&b);
        int a[b];
        for(i=0; i<b; i++)
        {
             scanf("%d",&a[i]);
        }
        for(j=1; i<b; i++)
        {
            if(a[i]-a[i-1]!=1)
            {
                c++;
            }
        }
        for(i=1; i<b; i++)
        {
            if(a[i-1]-a[i]!=1)
            {
                d++;
            }
        }
        if(c<=1 || d<=1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

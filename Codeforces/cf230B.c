#include<stdio.h>
int main()
{
    long long int x,b,i,j,uhu=0;
    scanf("%lld",&x);
    for(i=0;i<x;i++)
    {
        uhu=0;
        scanf("%lld",&b);
        for(j=1;j<=b;j++)
        {
            if(b%j==0)
            {
                uhu++;
                if(uhu>3) break;
            }
        }
        if(uhu==3) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}

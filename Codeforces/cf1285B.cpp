#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,d,e,b[100000],c,i,j,k,x;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        c=0;
        e=0;
        x=1;
        scanf("%lld",&d);
        for(j=0; j<d; j++)
        {
            scanf("%lld",&b[j]);
            e+=b[j];
            if(e<=0)
                x=0;
        }
        e=0;
        for(k=d-1; k>=0; k--)
        {
            e+=b[k];
            if(e<=0)
                x=0;
        }
        if(x)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

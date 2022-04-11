#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a[10000],f[10000],c=1,d,e,i,j=1,k,l;
    f[0]=1;
    for(i=1; i<=20; i++)
    {
        c*=i;
        f[j++]=c;
    }
    cin>>t;
    for(ll x=1; x<=t; x++)
    {
        scanf("%lld",&d);
        k=0;
        for(j=20; j>=0; j--)
        {
            if(d>=f[j])
            {
                d=d-f[j];
                a[k++]=j;
            }
        }
        if(d==0)
        {
            printf("Case %lld: ",x);

            for(i=k-1; i>=0; i--)
            {
                if(i==0) printf("%lld!\n",a[i]);
                else printf("%lld!+",a[i]);
            }
        }
        else
            printf("Case %lld: impossible\n",x);
    }
    return 0;
}

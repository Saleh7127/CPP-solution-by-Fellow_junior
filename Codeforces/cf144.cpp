#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a[10000],c,d,e,f,i,j,k,lo,ma;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    lo=a[1];
    ma=a[1];
    c=1;
    d=1;
    for(i=1;i<=n;i++)
    {
        if(a[i]<=lo)
        {
            lo=a[i];
            c=i;
        }
        if(a[i]>ma)
        {
            ma=a[i];
            d=i;
        }
    }
    if(d>c)
    {
        e=(d-1)+(n-c)-1;
        if(e<0) e=0;
        printf("%lld\n",e);
    }
    else
    {
        e=(d-1)+(n-c);
        if(e<0) e=0;
        printf("%lld\n",e);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a[10000],c,d,e,f,g,i,j,k,l;
    cin>>c;
    for(i=1; i<=c; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            d=i;
        }
        if(a[i]==c)
        {
            e=i;
        }
    }
    if(d<e)
    {
        f=abs(1-d);
        g=abs(c-e);
        k=max(f,g)+e;
        printf("%lld\n",abs(d-k));
    }
    else
    {
        f=abs(1-e);
        g=abs(c-d);
        k=max(f,g)+d;
        printf("%lld\n",abs(e-k));
    }
    return 0;
}

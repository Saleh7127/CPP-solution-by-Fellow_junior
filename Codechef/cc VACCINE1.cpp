#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,c,d,e,f,i,j,k,l;
    cin>>a>>b>>c>>d>>e;

    if(a==c)
    {
        for(i=a; ; i++)
        {
            e-=(b+d);
            if(e<=0) break;
        }
        cout<<i<<endl;
    }
    else if(a>c)
    {
        for(i=c; ; i++)
        {
            if(i==a) break;
            e-=d;
            if(e<=0) break;
        }
        k=i;
        if(e>0)
        {
            for(i=a; ; i++)
            {
                e-=(b+d);
                if(e<=0) break;
            }
            k=i;
        }
        cout<<k<<endl;
    }
    else
    {
        for(i=a; ; i++)
        {
            if(i==c) break;
            e-=b;
            if(e<=0) break;

        }
        k=i;
        if(e>0)
        {
            for(i=c; ; i++)
            {
                e-=(b+d);
                if(e<=0) break;
            }
            k=i;
        }
        cout<<k<<endl;
    }

    return 0;
}

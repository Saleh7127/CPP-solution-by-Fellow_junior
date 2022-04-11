#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll p,q;

ll div(ll x)
{
    if(x==1) return 1;
    ll s=p;
    while(s%q==0)
    {
        s/=x;
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    test
    {
         cin>>p>>q;
         if(p%q==0)
         {
             ll ans=1;
             for(ll i=1;i*i<=q;i++)
             {
                 if(q%i==0)
                 {
                     ans=max(ans,div(i));
                     ans=max(ans,div(q/i));
                 }
             }
             cout<<ans<<endl;
         }
         else cout<<p<<endl;

    }



    return 0;
}

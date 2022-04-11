#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll bigmod(ll a,ll c,ll d)
{
    if(c==0) return 1LL;
    ll x=bigmod(a,c/2,d);
    x=((x%d)*(x%d))%d;
    if(c%2==1LL)
    {
        x=((x%d)*(a%d))%d;
    }
    return x;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll a,b,c,d,e,f,l=1e9+7;

        cin>>a>>b;

        c=bigmod(2,a,l)-1;

        f=bigmod(c,b,l);

        cout<<f<<endl;
   }

   return 0;
}

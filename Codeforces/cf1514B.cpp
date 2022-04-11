#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll mod(ll a,ll c,ll d)
{
    if(c==0) return 1;
    ll x=mod(a,c/2,d);
    x=x*x%d;
    if(c%2==1)
    {
        x=(x*a)%d;
    }
    return x;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll n,m,i,j,k,l=1e9+7;

       cin>>n>>m;

       cout<<mod(n,m,l)<<endl;
   }


   return 0;
}

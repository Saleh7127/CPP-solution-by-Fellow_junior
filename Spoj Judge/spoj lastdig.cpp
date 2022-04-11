#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll mod(ll a,ll c,ll m)
{
    if(c==0) return 1;
    ll x=mod(a,c/2,m);
    x=(x*x)%m;
    if(c%2==1)
    {
        x=(x*a)%m;
    }
    return x;
}

int main()
{
   fellow_junior
   test
   {
       ll a,c,d,e,i,j,k,l;
       cin>>a>>c;
       d=mod(a,c,10);
       cout<<d<<endl;
   }
   return 0;
}

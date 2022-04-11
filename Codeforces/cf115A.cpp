#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>xx[20000];
ll ans=1;

void check(ll ind,ll a)
{
    ans=max(ans,a);

    for(auto i: xx[ind])
    {
        check(i,a+1);
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,i,j,k;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       cin>>k;
       if(k>-1)
       {
           xx[k].push_back(i);
       }
   }
   for(i=1;i<=n;i++)
   {
       check(i,1);
   }
   cout<<ans<<endl;
   return 0;
}

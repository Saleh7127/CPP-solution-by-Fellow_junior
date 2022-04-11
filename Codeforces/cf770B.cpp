#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll sum(ll x)
{
    ll ans=0;
    while(x)
    {
        ans+=(x%10);
        x/=10;
    }
    return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c=1,d,e,i,j,k,ans;

   cin>>a;
   ans=a;
   for(i=1;i<=18;i++)
   {
       c*=10;
       k=(a/c)*c-1;
       if(sum(k)>sum(ans) || (sum(k)==sum(ans) && k>ans))
       {
           ans=k;
       }
   }
   cout<<ans<<endl;
   return 0;
}

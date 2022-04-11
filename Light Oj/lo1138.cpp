#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll a;
ll nZero(ll x)
{
    ll ans=0;
    while(x)
    {
        ans+=(x/5);
        x/=5;
    }
    return ans;
}
void searchh()
{
    ll five,mid,lo=0,hi=100000000000,ans=0;
    while(lo<=hi)
    {
       mid=(lo+hi)/2;
       five=nZero(mid);
       if(five==a)
       {
           ans=mid;
           hi=mid-1;
       }
       else if(five<a)
       {
           lo=mid+1;
       }
       else
       {
           hi=mid-1;
       }
    }
    if(ans==0) printf("impossible\n");
    else printf("%lld\n",ans);
}
int main()
{
   fellow_junior

   ll t,c,d,i,j,k,l;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>a;
       printf("Case %lld: ",i);
       searchh();
   }
   return 0;
}

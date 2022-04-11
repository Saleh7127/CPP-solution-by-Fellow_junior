#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n,m,a[10000],lo,hi;

ll solution(ll x)
{
    ll c=1,i,s=0;
    for(i=0;i<n;i++)
    {
        if(s+a[i]<=x)
        {
            s+=a[i];
        }
        else
        {
            c++;
            s=a[i];
        }
    }
    return c;
}

ll srch()
{
    ll mid,ans=hi;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(solution(mid)<=m)
        {
            ans=min(ans,mid);
            hi=mid-1;
        }
        else lo=mid+1;
    }
    return ans;
}

int main()
{
   fellow_junior
   ll t,i,j,k,l;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>n>>m;
       lo=0,hi=0;
       for(j=0;j<n;j++)
       {
           cin>>a[j];
           lo=max(lo,a[j]);
           hi+=a[j];
       }
       printf("Case %lld: %lld\n",i,srch());
   }

   return 0;
}


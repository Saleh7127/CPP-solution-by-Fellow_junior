#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll ans[20005],a[20005];
void sett(ll l, ll r ,ll d)
{
    if(l>r) return;
    if(l==r)
    {
        ans[a[l]]=d;
        return;
    }
    ll m=0,x;
    for(ll i=l;i<=r;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
            x=i;
        }
    }
    ans[a[x]]=d;
    sett(l,x-1,d+1);
    sett(x+1,r,d+1);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
       ll n,m,i,j,k,l;
       cin>>n;
       for(i=1;i<=n;i++)
       {
           cin>>a[i];
       }
       sett(1,n,0);
       for(i=1;i<=n;i++)
       {
           cout<<ans[a[i]]<<" ";
       }
       cout<<endl;
   }

   return 0;
}

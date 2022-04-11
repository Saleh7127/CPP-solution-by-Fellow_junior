#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll mod=1e9+7;
ll bigmod(ll a,ll c,ll d)
{
    if(c==0) return 1LL;
    ll x=bigmod(a,c/2,d);
    x=(x*x)%d;
    if(c%2==1LL)
    {
        x=(x*a)%d;
    }
    return x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,x,m,i,j,k=0,l=0,s=0,f;

   cin>>n>>x;

   ll a[n+4];

   for(i=1;i<=n;i++)
   {
        cin>>a[i];
        k+=a[i];
   }

   s=k-a[n];

   for(i=a[n];i>=1;i--)
   {
        while(n && a[n]==i)
        {
             n--;
             l++;
        }
        if(l%x) break;
        s++;
        l/=x;
   }

   cout<<bigmod(x,s,mod)<<endl;

   return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll x[10000];
ll gcd(ll a,ll c)
{
    while(c)
    {
        a=a%c;
        swap(a,c);
    }
    return a;
}
int main()
{
   Faster
   while(scanf("%lld ",&x[0])!=EOF)
   {
       if(x[0]==0) break;
       ll c=1;
       while(1)
       {
           scanf("%lld ",&x[c]);
           if(x[c]==0) break;
           else c++;
       }
       ll ans=0;
       for(ll i=1;i<c;i++)
       {
           ll d=x[i]-x[i-1];
           ans=gcd(ans,d);
       }
       if(ans<0) ans=ans*(-1);
       printf("%lld\n",ans);
   }
   return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
ll dsum(ll x)
{
    ll a=0,r;
    while(x)
    {
        r=x%10;
        a+=r;
        x/=10;
    }
    return a;
}
int main()
{
   Faster
   ll a[20000],c,d,e,f,i,j,k,l;
   for(i=19,j=0;j<10000;i+=9)
   {
       if(dsum(i)==10)
       {
           a[j]=i;
           j++;
       }
   }
   scanf("%lld",&c);
   printf("%lld\n",a[c-1]);
   return 0;
}

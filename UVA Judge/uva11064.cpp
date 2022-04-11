#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll phi(ll a)
{

    ll ans=a;
    for(ll i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            while(a%i==0)
            {
                a/=i;
            }
            ans-=(ans/i);
        }
    }
    if(a>1) ans-=(ans/a);
    return ans;
}
ll fact(ll x)
{
    ll f=1,i;
    for(i=2;i<sqrt(x);i++)
    {
        if(x%i==0)
        {
           f+=2;
        }
    }
    if(i*i==x) f++;
    return f;
}
int main()
{
   fellow_junior
   ll c;
   while(cin>>c)
   {
       if(c<=1)
       {
           cout<<0<<endl;
           continue;
       }
       cout<<c-phi(c)-fact(c)<<endl;
   }
   return 0;
}

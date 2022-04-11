#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll phi(ll n)
{
    ll ans=n;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }
            ans-=ans/i;
        }
    }
    if(n>1) ans-=ans/n;
    return ans;
}

int main()
{
   fellow_junior

   ll a;
   while(cin>>a && a)
   {
       cout<<phi(a)<<endl;
   }
   return 0;
}

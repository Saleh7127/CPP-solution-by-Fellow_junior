#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll fact[500000];

ll gunn(ll x,ll fact[],ll sizee)
{
    ll c=0,r;

    for(ll i=0;i<sizee;i++)
    {
        r=fact[i]*x+c;
        fact[i]=r%10;
        c=r/10;
    }
    while(c)
    {
        fact[sizee]=c%10;
        c/=10;
        sizee++;
    }
    return sizee;
}

void factorial(ll n)
{
    fact[0]=1;
    ll sizee=1;
    for(ll i=2;i<=n;i++)
    {
        sizee=gunn(i,fact,sizee);
    }

    for(ll i=sizee-1;i>=0;i--)
    {
       cout<<fact[i];
    }
    cout<<endl;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a;
   while(cin>>a)
   {
       cout<<a<<"!"<<endl;
       factorial(a);
   }
   return 0;
}

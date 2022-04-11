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

    for(ll i=0;i<sizee;i++)
    {
        if(fact[i]!=0)
        {
            printf("%5lld -> %lld\n",n,fact[i]);
            break;
        }
    }
}


/*
another process

fact[0]=fact[1]=1;
i=2;
while(i<=10000)
{
    ll ans;
    ans=i*fact[i-1];
    while(ans%10==0)
    {
        ans/=10;
    }
    ans=ans%100000;
    fact[i]=ans;
    i++;

    cout<<fact[input]%10<<endl;
}
*/

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a;
   while(cin>>a)
   {
       factorial(a);
   }
   return 0;
}

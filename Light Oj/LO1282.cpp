/***
 created: 2021-10-26-23.02.54
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define nl '\n'

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


    test
    {
         ll n,m,i,j,k,last,first;

         scanf("%lld %lld",&n,&k);

         last=bigmod(n,k,1000);

         double y= (double)k*log10(n);

         y=y-(ll)y;

         double ans= pow(10,y);

         first = ans*100;

         // if want first x digit then first = ans*pow(10,x-1);

         printf("Case %d: %03lld %03lld\n",cs,first,last);
    }


   return 0;
}

/*
X=n^k;

X can be expressed as a powwer of 10;

K * log10(N) = log10(10^y)
=> K * log10(N) = y * log10(10)
=> y = K * log10(N)
Now y will be a decimal number of form abc—.xyz—
Therefore,
NK = 10abc—.xyz—
NK = 10abc— + 0.xyz—
=> NK = 10abc— * 100.xyz—
*/

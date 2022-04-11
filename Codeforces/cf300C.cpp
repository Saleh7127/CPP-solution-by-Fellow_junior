#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll f[1000005];
ll mod=1e9+7;
void fact()
{
   f[0]=1LL;
   f[1]=1LL;
   for(ll i=2;i<=1000002;i++)
   {
       f[i]=(f[i-1]*i)%mod;
   }
}

ll bigmod(ll a,ll c,ll d)
{
    if(c==0) return 1LL;
    ll x=bigmod(a,c/2,d);
    x=((x%d)*(x%d))%d;
    if(c%2==1LL)
    {
        x=((x%d)*(a%d))%d;
    }
    return x;
}

bool dsum(ll n,ll a,ll b)
{
    ll r;
    while(n)
    {
        r=n%10;
        if(r!=a && r!=b) return 0;
        n/=10;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    fact();


    ll a,b,n,m,i,j,k,l=0;

    cin>>a>>b>>n;

    for(i=0;i<=n;i++)
    {
        k=i*a+(n-i)*b;
        if(dsum(k,a,b))
        {
            m=((f[n-i]%mod)*(f[i]%mod))%mod;
            l=(l+f[n]*bigmod(m,mod-2,mod))%mod;
        }
    }
    cout<<l<<endl;

    return 0;
}

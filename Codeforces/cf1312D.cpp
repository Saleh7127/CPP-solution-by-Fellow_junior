#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll mod=998244353;

ll f[200005];

ll bmod(ll a,ll c,ll d)
{
    if(c==0) return 1;
    ll x=bmod(a,c/2,d);
    x=x*x%d;
    if(c%2==1)
    {
        x=(x*a)%d;
    }
    return x;
}

ll inverse(ll a,ll b,ll c)
{
    return bmod(a,b,c);
}

ll nCr(ll n,ll r, ll mod)
{
    return ((f[n]%mod)*inverse((f[n-r]*f[r])%mod,mod-2,mod))%mod;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    f[0]=1;
    for(i=1; i<=200002; i++)
    {
        f[i]=(f[i-1]*i)%mod;
    }

    cin>>n>>m;

    if(n==2)
    {
        cout<<0<<endl;
        return 0;
    }

    k=((nCr(m,n-1,mod)%mod)*((n-2)%mod))%mod*bmod(2,n-3,mod)%mod;
    cout<<k<<endl;

    return 0;
}

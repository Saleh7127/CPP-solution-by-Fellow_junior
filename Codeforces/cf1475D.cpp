#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll mod=1e9+7;

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
    return (f[n]*inverse((f[n-r]*f[r])%mod,mod-2,mod))%mod;
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

    test
    {
        ll r=0,c=0;

        cin>>n>>k;

        vector<ll>a(n+5);

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());

        for(i=0; i<n; i++)
        {
            if(a[i]==a[k-1])
            {
                c++;
                if(i<=k-1)
                {
                    r++;
                }
            }
        }
        cout<<nCr(c,r,mod)<<endl;
    }

    return 0;
}

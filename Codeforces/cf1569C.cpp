#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll mod=998244353;
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

ll f[200015],inf[200015];


void fact()
{
    f[0]=inf[0]=1;

    for(ll i=1; i<200005; i++)
    {
        f[i]=(f[i-1]*i)%mod;
        inf[i]=bigmod(f[i],mod-2,mod);
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fact();

    test
    {
        ll n,m,i,j,k,l;

        cin>>n;

        ll a[n+4];

        for(i=1; i<=n; i++) cin>>a[i];

        sort(a+1,a+n+1);

        if(a[n]==a[n-1]) cout<<f[n]<<endl;
        else if((a[n]-2)>=a[n-1]) cout<<0<<endl;
        else
        {
            l=0;
            for(i=1; i<n; i++)
            {
                 if(a[i]==a[n-1]) l++;
            }

            m=f[n];
            k=(f[n]*bigmod(l+1,mod-2,mod))%mod;

            m=(m-k)%mod;
            m=(m+mod)%mod;

            cout<<m<<endl;

        }
    }


    return 0;
}

/***
 created: 2022-01-19-00.24.14
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
map<ll,ll>y;
vector<ll>x;
ll mod=1e8+7;
ll f[100005];

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

void fact()
{
    ll i;
    f[0]=1;
    for(i=1; i<=100000; i++)
    {
        f[i]=(f[i-1]*i)%mod;
    }
}


void sqr()
{
    ll i,j;

    for(i=2; i<=100002; i++)
    {
        j=i*i;
        while(j<=(ll)(1e10))
        {
            if(y[j]==0) x.push_back(j);

            y[j]=1;

            j*=i;
        }
    }
    sort(x.begin(),x.end());
}

ll nCr(ll n)
{
    ll ans=(f[2*n]);

    ll inv = bigmod((f[n]*f[n+1])%mod,mod-2,mod);

    ans=(ans*inv)%mod;

    return ans;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fact();
    sqr();



    test
    {
        ll n,a,b,i,j;

        cin>>a>>b;

        n=(upper_bound(x.begin(),x.end(),b)-x.begin())-(lower_bound(x.begin(),x.end(),a)-x.begin());

        // cout<<n<<nl;

        cout<<"Case "<<cs<<": ";

        if(n==0)
        {
            cout<<0<<nl;
        }
        else
        {
            cout<<nCr(n)<<nl;
        }
    }

    get_lost_idiot;
}

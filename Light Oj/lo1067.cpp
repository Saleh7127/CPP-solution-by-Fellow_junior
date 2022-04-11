#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll m=1000003;
ll fact[1000006];
ll factinv[1000006];

ll bigmod(ll a,ll c,ll m)
{
    if(c==0) return 1;

    ll x=bigmod(a,c/2,m);

    x=x*x%m;

    if(c%2==1)
    {
        x=(x*a)%m;
    }

    return x;
}

void precal()
{
    fact[0]=1;

    ll i;

    for(i=1; i<1000005; i++)
    {
        fact[i]=(fact[i-1]*i)%m;
    }
    for(i=0; i<1000005; i++)
    {
        factinv[i]=bigmod(fact[i],m-2,m);
    }
}

ll ncr(ll n,ll r)
{
    ll ans=((fact[n]%m)*(factinv[r]%m))%m;

    ans=((ans%m)*(factinv[n-r]%m))%m;

    return ans;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    precal();

    test
    {
        ll n,r;
        cin>>n>>r;
        cout<<"Case "<<cs<<": "<<ncr(n,r)<<endl;
    }


    return 0;
}

/***
 created: 2022-03-15-22.19.28
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
#define mod 1000000

ll f[1000];
ll c[310][310];
void fact()
{
    f[0]=1;
    f[1]=1;

    for(ll i=2; i<=305; i++)
    {
        f[i]=(f[i-1]*i)%mod;
    }
}

ll bigmod(ll a,ll c,ll m)
{

    if(c==0) return 1;
    ll x=bigmod(a,c/2,m);
    x=(x*x)%m;
    if(c%2==1)
    {
        x=(x*a)%m;
    }
    return x;
}

void nCr()
{

    ll i,j,k,l;

    for(i=0; i<=302; i++)
    {
        c[i][0]=1;
        for(j=1; j<=i; j++)
        {
            c[i][j]=(c[i][j]+c[i-1][j]+c[i-1][j-1]);
        }
    }



    /*

    if(r==1) return n;

    if(r==n) return 1;

    if(r>n) return 0;


    ll j= bigmod(f[n-r],mod-2,mod);
    ll k= bigmod(f[r],mod-2,mod);

    return (f[n]%mod*j%mod*k%mod)%mod;

    */
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //fact();

    nCr();

    test
    {
        ll n,m,i,r,p,j,k,l;

        cin>>n>>m>>p;

        m-=(p*n);

        cout<<c[m+n-1][m]<<nl;

    }


    get_lost_idiot;
}


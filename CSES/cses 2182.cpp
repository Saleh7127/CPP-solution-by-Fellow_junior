/***
 created: 2022-04-10-23.21.24
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
#define maX 10000008
ll mod=1e9+7;

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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l=1,nd=1,sd=1,pd=1;

    cin>>n;

    ll a[n+2],b[n+2];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }

    for(i=0;i<n;i++)
    {
        l*=bigmod(a[i],b[i],mod);

        nd=(nd * (b[i]+1))%mod;

        sd= sd * (bigmod(a[i],b[i]+1,mod)-1)%mod * bigmod(a[i]-1,mod-2,mod);

        sd%=mod;

    }

    ll f=-1;


    for(i=0;i<n;i++)
    {
        if(b[i]%2==1)
        {
            f=i;
        }
    }


    if(f!=-1)
    {
        ll gama=1;

        for(i=0;i<n;i++)
        {
            if(i==f)
            {
                gama=(gama*(b[i]+1)/2)%(mod-1);
            }
            else
            {
                gama=(gama*(b[i]+1))%(mod-1);
            }
        }

        for(i=0;i<n;i++)
        {
            pd=(pd*bigmod(a[i],(b[i]*gama)%(mod-1),mod))%mod;
        }
    }
    else
    {
        ll gama=1;

        for(i=0;i<n;i++)
        {
            gama=(gama*(b[i]+1))%(mod-1);
        }

        for(i=0;i<n;i++)
        {
            pd=(pd*bigmod(a[i],((b[i]/2)*gama)%(mod-1),mod))%mod;
        }
    }

    cout<<nd<<" "<<sd<<" "<<pd<<nl;



    get_lost_idiot;
}

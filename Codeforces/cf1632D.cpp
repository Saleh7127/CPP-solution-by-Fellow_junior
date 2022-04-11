/***
 created: 2022-02-01-15.36.38
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll n,a[200005];
ll st[200005][18];
ll logg2[200005];

void logg()
{
    logg2[1]=0;

    for(ll i=2; i<=n; i++)
    {
        logg2[i]=logg2[i/2]+1;
    }
}

void sparsetable()
{
    logg();

    ll i,j,x,y;

    for(i=0; i<n; i++) st[i][0]=a[i];

    for(i=1; i<=logg2[n]; i++)
    {
        for(j=0; j+(1<<i)<=n; j++)
        {
            x=st[j][i-1];
            y=st[j+(1<<i-1)][i-1];

            st[j][i]=__gcd(x,y);
        }
    }
}

ll range_query(ll l,ll r)
{
    ll k=logg2[r-l+1];
    ll x=st[l][k];
    ll y=st[r-(1<<k)+1][k];
    return __gcd(x,y);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll i,j,k,l,r,ans=0;

   cin>>n;

   for(i=0;i<n;i++) cin>>a[i];

   sparsetable();

   l=r=0;

   while(r<n)
   {
        while(l<=r && range_query(l,r)<(r-l+1))
        {
             l++;
        }

        if(l<=r && range_query(l,r)==(r-l+1))
        {
             ans++;
             l=r+1;
        }
        cout<<ans<<" ";

        r++;
   }

   cout<<nl;

   get_lost_idiot;
}

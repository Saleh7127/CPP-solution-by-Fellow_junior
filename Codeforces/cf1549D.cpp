/***
 created: 2022-02-03-12.40.34
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll n,a[200005],df[200006];
ll st[200005][20];
ll logg2[200005];

void logg()
{
    logg2[1]=0;

    for(ll i=2; i<=200005; i++)
    {
        logg2[i]=logg2[i/2]+1;
    }
}
void sparsetable()
{
    ll i,j,x,y;

    for(i=0; i<n; i++) st[i][0]=df[i+1];

    for(i=1; i<=logg2[n+1]; i++)
    {
        for(j=0; j+(1<<i)<=n; j++)
        {
            x=st[j][i-1];
            y=st[j+(1<<(i-1))][i-1];

            st[j][i]=__gcd(x,y);
        }
    }
}

ll range_query(ll l,ll r)
{
    l--,r--;
    ll k=logg2[r-l+1];
    ll x=st[l][k];
    ll y=st[r-(1<<k)+1][k];
    return __gcd(x,y);
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    logg();

    test
    {
        ll i,j,k,l,h,ans=0;

        cin>>n;

        for(i=1; i<=n; i++) cin>>a[i];

        for(i=2; i<=n; i++)
        {
            df[i-1]=abs(a[i-1]-a[i]);
        }

        sparsetable();

        for(i=1; i<=n-1; i++)
        {
            l=1,h=i;
            k=i+1;

            while(l<=h)
            {
                ll mid=(l+h)/2;

                if(range_query(mid,i)>1)
                {
                    k=mid;
                    h=mid-1;
                }
                else l=mid+1;
            }
            ans=max(ans,i-k+1);
        }
        cout<<ans+1<<nl;
    }

    get_lost_idiot;
}


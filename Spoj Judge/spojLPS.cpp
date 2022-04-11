/***
 created: 2022-01-03-13.26.45
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll mod[2]= {1000007707,1000007909};
ll base[2]= {149,307};
ll hash1[2][1000007];
ll hash2[2][1000007];
ll p1[1000007];
ll p2[1000007];

void pwr()
{
    p1[0]=p2[0]=1;

    for(ll i=1; i<=1000005; i++)
    {
        p1[i]=(p1[i-1]*base[0])%mod[0];
        p2[i]=(p2[i-1]*base[1])%mod[1];
    }
}

void hashing(string a,string b)
{
    ///for string a

    hash1[0][0]=hash1[1][0]=0;

    for(ll i=1; i<=a.size(); i++)
    {
        hash1[0][i]=(hash1[0][i-1]*base[0] + a[i-1])%mod[0];
        hash1[1][i]=(hash1[1][i-1]*base[1] + a[i-1])%mod[1];
    }

    ///for string b

    hash2[0][0]=hash2[1][0]=0;

    for(ll i=b.size(); i>=1; i--)
    {
        hash2[0][i]=(hash2[0][i+1]*base[0] + b[i-1])%mod[0];
        hash2[1][i]=(hash2[1][i+1]*base[1] + b[i-1])%mod[1];
    }

}

ll forwardhash(ll l,ll r)
{
    ll x=(hash1[0][r] - hash1[0][l-1]*p1[r-l+1])%mod[0];

    if(x<0) x+=mod[0];

    return x;
}

ll backwardhash(ll l,ll r)
{
    ll x=(hash2[0][l] - hash2[0][r+1]*p1[r-l+1])%mod[0];

    if(x<0) x+=mod[0];

    return x;
}


bool check(ll mid,ll n)
{
    ll x,y;

    for(ll i=1; i<=n-mid+1; i++)
    {
        x=forwardhash(i,i+mid-1);
        y=backwardhash(i,i+mid-1);

       // cout<<x<<" "<<y<<" "<<mid<<nl;

        if(x==y)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    pwr();


    ll sz;

    string a,b;

    cin>>sz;

    cin>>a;

    b=a;

    hashing(a,b);

    ll l=1,h=sz,ans=0;

    while(l<=h)
    {
        ll mid=(l+h)/2;
        ll ee=0;

        if(check(mid,sz))
        {
            ans=max(mid,ans);
            ee=1;
            l=mid+1;
        }
        if(mid+1<=sz && check(mid+1,sz))
        {
            ans=max(mid+1,ans);
            ee=1;
            l=mid+2;
        }
        if(ee==0)
        {
            h=mid-1;
        }
    }

    cout<<ans<<nl;

    get_lost_idiot;
}


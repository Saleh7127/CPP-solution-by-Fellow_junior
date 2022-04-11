/***
 created: 2022-01-23-23.53.13
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'


ll mod[2]= {1000007707,1000007909};
ll base[2]= {149,307};
ll hash1[2][1000005];
ll hash2[2][50000];
ll p1[1000005];
ll p2[50000];

void pwr()
{
    p1[0]=p2[0]=1;

    for(ll i=1; i<=1000005; i++)
    {
        p1[i]=(p1[i-1]*base[0])%mod[0];
        //p2[i]=(p2[i-1]*base[1])%mod[1];
    }
}

void hashing(string a)
{
    ///for string a

    hash1[0][0]=hash1[1][0]=0;

    for(ll i=1; i<=a.size(); i++)
    {
        hash1[0][i]=(hash1[0][i-1]*base[0] + a[i-1])%mod[0];
        //hash1[1][i]=(hash1[1][i-1]*base[1] + a[i-1])%mod[1];
    }
}

ll forwardhash(ll l,ll r)
{
    ll x=(hash1[0][r] - hash1[0][l-1]*p1[r-l+1])%mod[0];

    if(x<0) x+=mod[0];

    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    pwr();

    string a;
    ll n;

    while(cin>>n)
    {
        cin>>a;

        ll m=0,i,j,k,l,y,z;

        hashing(a);

        l=a.size();

        unordered_map<ll,ll>x;

        y=z=-1;

        for(i=1; i<=l-n+1; i++)
        {
            k=forwardhash(i,i+n-1);

            x[k]++;

            //cout<<x[k]<<nl;

            if(x[k]>m)
            {
                m=x[k];
                y=i-1;
                z=i+n-2;
            }
        }

        if(y>-1)
        {
            for(i=y; i<=z; i++)
            {
                cout<<a[i];
            }
        }
        cout<<nl;
    }

    get_lost_idiot;
}

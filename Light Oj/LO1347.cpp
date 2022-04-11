/***
 created: 2022-01-06-22.12.24
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll mod[2]= {1000007707,1000007909};
ll base[2]= {149,307};
ll hash1[3][1000005];
ll p1[1000005];

void pwr()
{
    p1[0]=1;

    for(ll i=1; i<=6002; i++)
    {
        p1[i]=(p1[i-1]*base[0])%mod[0];
    }
}

void hashing(string a,string b,string c)
{
    hash1[0][0]=hash1[1][0]=hash1[2][0]=0;

    for(ll i=1; i<=a.size(); i++)
    {
        hash1[0][i]=(hash1[0][i-1]*base[0] + a[i-1])%mod[0];
    }
    for(ll i=1; i<=b.size(); i++)
    {
        hash1[1][i]=(hash1[1][i-1]*base[0] + b[i-1])%mod[0];
    }
    for(ll i=1; i<=c.size(); i++)
    {
        hash1[2][i]=(hash1[2][i-1]*base[0] + c[i-1])%mod[0];
    }
}


ll forwardhash1(ll l,ll r)
{
    ll x=(hash1[0][r] - hash1[0][l-1]*p1[r-l+1])%mod[0];

    if(x<0) x+=mod[0];

    return x;
}

ll forwardhash2(ll l,ll r)
{
    ll x=(hash1[1][r] - hash1[1][l-1]*p1[r-l+1])%mod[0];

    if(x<0) x+=mod[0];

    return x;
}

ll forwardhash3(ll l,ll r)
{
    ll x=(hash1[2][r] - hash1[2][l-1]*p1[r-l+1])%mod[0];

    if(x<0) x+=mod[0];

    return x;
}

unordered_map<ll,ll>x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    pwr();


    test
    {

        string a,b,c;

        ll n,i,j,k,l,h,ans=0;


        cin>>a;
        cin>>b;
        cin>>c;

        hashing(a,b,c);

        ll s1,s2,s3;

        s1=a.size();
        s2=b.size();
        s3=c.size();

        l=1ll,h=min({s1,s2,s3});

        while(l<=h)
        {
            ll m=0;

            ll mid=(l+h)/2;

            x.clear();

            for(i=1; i<=(s1-mid+1); i++)
            {
                ll h1=forwardhash1(i,i+mid-1);

                x[h1]=1;
            }

            for(j=1; j<=(s2-mid+1); j++)
            {
                ll h2=forwardhash2(j,j+mid-1);

                if(x.count(h2))
                {
                    x[h2]=2;
                }
            }

            for(k=1; k<=(s3-mid+1); k++)
            {
                ll h3=forwardhash3(k,k+mid-1);

                if(x[h3]==2)
                {
                    m=1;
                    break;
                }
            }

            if(m==1)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }

        }

        cout<<"Case "<<cs<<": "<<ans<<nl;

    }

    get_lost_idiot;
}



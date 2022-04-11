/***
 created: 2022-01-04-14.17.10
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll mod[2]= {1000007707,1000007909};
ll base[2]= {26,307};
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

void hashing(string a)
{
    ///for string a

    hash1[0][0]=hash1[1][0]=0;

    for(ll i=1; i<=a.size(); i++)
    {
        hash1[0][i]=(hash1[0][i-1]*base[0] + a[i-1])%mod[0];
        hash1[1][i]=(hash1[1][i-1]*base[1] + a[i-1])%mod[1];
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


    test
    {
        ll n,m,i,j,k,l,h;

        string a;

        cin>>n>>a;

        a+=a;

        hashing(a);

        k=1;

        for(i=2;i<=n;i++)
        {
             l=0,h=n-1;

             while(l<=h)
             {
                  ll mid=(l+h)/2;

                  if(forwardhash(k,k+mid)==forwardhash(i,i+mid))
                  {
                       l=mid+1;
                  }
                  else
                  {
                       h=mid-1;
                  }
             }

             if(l<=n-1)
             {
                  if(a[i+l-1]<a[k+l-1])
                  {
                       k=i;
                  }
             }
        }

        //cout<<a.substr(k-1,n)<<nl;

        cout<<k-1<<nl;

    }

    get_lost_idiot;
}

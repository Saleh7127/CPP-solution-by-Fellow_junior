/***
 created: 2022-01-05-19.51.04
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll mod[2]= {1000007707,1000007909};
ll base[2]= {149,307};
ll hash1[2][50000];
ll hash2[2][50000];
ll p1[50000];
ll p2[50000];

void pwr()
{
    p1[0]=p2[0]=1;

    for(ll i=1; i<=50000; i++)
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

unordered_map<ll,ll>x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    pwr();

    ll m;

    while(cin>>m)
    {

        if(m==0) break;

        string a;

        cin>>a;

        hashing(a);

        ll n,i,j,k,l,h,ans=0,in;

        n=a.size();

        l=1,h=n;

        while(l<=h)
        {
            ll mid=(l+h)/2;

            j=0;

            x.clear();

            for(i=1;i<=n-mid+1;i++)
            {

                k=forwardhash(i,i+mid-1);

                x[k]+=1;

                if(x[k]>=m)
                {
                     j=1;
                     ans=mid;
                     in=i;
                }

            }

            if(j==1) l=mid+1;
            else h=mid-1;

        }

         if(ans==0) cout<<"none"<<nl;
         else cout<<ans<<" "<<in-1<<nl;
    }

    get_lost_idiot;
}


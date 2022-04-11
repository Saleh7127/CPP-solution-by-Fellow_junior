/***
 created: 2022-01-23-11.20.10
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
    for(ll i=1; i<=10005; i++)
    {
        p1[i]=(p1[i-1]*base[0])%mod[0];
        //p2[i]=(p2[i-1]*base[1])%mod[1];
    }
}

void hashingg(string a,string b)
{
    ///for string a

    hash1[0][0]=hash1[1][0]=0;

    for(ll i=1; i<=a.size(); i++)
    {
        hash1[0][i]=(hash1[0][i-1]*base[0] + a[i-1])%mod[0];
        //hash1[1][i]=(hash1[1][i-1]*base[1] + a[i-1])%mod[1];
    }

    ///for string b

    hash2[0][0]=hash2[1][0]=0;

    for(ll i=b.size(); i>=1; i--)
    {
        hash2[0][i]=(hash2[0][i+1]*base[0] + b[i-1])%mod[0];
        //hash2[1][i]=(hash2[1][i+1]*base[1] + b[i-1])%mod[1];
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

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   pwr();

   string a;

   while(cin>>a)
   {
        string b;

        ll i,j,k,l=0,n,m=0;

        b=a;

        hashingg(a,b);

        map<pair<ll,ll>,ll>xx;

        set<char>y;

        for(i=0;a[i];i++)
        {
             y.insert(a[i]);
        }

        l=a.size();

        m=y.size();

        for(i=2;i<=l;i++)
        {
             for(j=1;j<=l-i+1;j++)
             {
                  ll fr=forwardhash(j,j+i-1);
                  ll bc=backwardhash(j,j+i-1);

                  if(fr==bc)
                  {
                       if(xx[{fr,bc}]==0) m++;
                       xx[{fr,bc}]=1;
                  }
             }
        }

        cout<<"The string '"<<a<<"' contains "<<m<<" palindromes."<<endl;

   }


   get_lost_idiot;
}

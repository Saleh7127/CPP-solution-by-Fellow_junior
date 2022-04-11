/***
 created: 2022-01-02-01.09.39
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll mod[2]= {1000007707,1000007909};
ll base[2]= {150,300};
ll hash1[1000007];
ll hash2[1000007];
ll p1[1000007];
ll p2[1000007];

void pwr()
{
     p1[0]=p2[0]=1;

     for(ll i=1;i<=1000005;i++)
     {
          p1[i]=(p1[i-1]*base[0])%mod[0];
          p2[i]=(p2[i-1]*base[1])%mod[1];
     }
}

void hashing(string a)
{
     hash1[0]=hash2[0]=0;

     for(ll i=1;i<=a.size();i++)
     {
          hash1[i]=(hash1[i-1]*base[0] + a[i-1])%mod[0];
          hash2[i]=(hash2[i-1]*base[1] + a[i-1])%mod[1];
     }
}

ll rangehash1(ll l,ll r)
{
     if(l==1) return hash1[r];

     ll x=(hash1[r] - hash1[l-1]*p1[r-l+1])%mod[0];

     x+=mod[0];

     return x%mod[0];
}

ll rangehash2(ll l,ll r)
{
     if(l==1) return hash2[r];

     ll x=(hash2[r] - hash2[l-1]*p2[r-l+1])%mod[1];

     x+=mod[1];

     return x%mod[1];
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   pwr();

   while(cin>>n && n)
   {
        string a,b;

        cin>>a>>b;

        l=a.size();

        hashing(a);

        ll hv1=rangehash1(1,l);
        ll hv2=rangehash2(1,l);

        hashing(b);

        m=0;

        for(i=1;i+l-1<=b.size();i++)
        {
             ll v1=rangehash1(i,i+l-1);
             ll v2=rangehash2(i,i+l-1);

             if(v1==hv1 && hv2==v2)
             {
                  m=1;

                  cout<<i-1<<nl;
             }
        }

        if(!m) cout<<nl<<nl;
   }



   get_lost_idiot;
}

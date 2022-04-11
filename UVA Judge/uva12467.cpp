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

     for(ll i=1;i<=1000005;i++)
     {
          p1[i]=(p1[i-1]*base[0])%mod[0];
          p2[i]=(p2[i-1]*base[1])%mod[1];
     }
}

void hashing(string a,string b)
{
     ///for string a

     hash1[0][0]=hash1[1][0]=0;

     for(ll i=1;i<=a.size();i++)
     {
          hash1[0][i]=(hash1[0][i-1]*base[0] + a[i-1])%mod[0];
          hash1[1][i]=(hash1[1][i-1]*base[1] + a[i-1])%mod[1];
     }

     ///for string b

     hash2[0][0]=hash2[1][0]=0;

     for(ll i=1;i<=b.size();i++)
     {
          hash2[0][i]=(hash2[0][i-1]*base[0] + b[i-1])%mod[0];
          hash2[1][i]=(hash2[1][i-1]*base[1] + b[i-1])%mod[1];
     }

}

pair<ll,ll> rangehash1(ll l,ll r)
{
     if(l==1) return {hash1[0][r],hash1[1][r]};

     ll x=(hash1[0][r] - hash1[0][l-1]*p1[r-l+1])%mod[0];

     ll y=(hash1[1][r] - hash1[1][l-1]*p2[r-l+1])%mod[1];

     if(x<0) x+=mod[0];

     if(y<0) y+=mod[1];

     return {x,y};
}

pair<ll,ll> rangehash2(ll l,ll r)
{
     if(l==1) return {hash2[0][r],hash2[1][r]};

     ll x=(hash2[0][r] - hash2[0][l-1]*p1[r-l+1])%mod[0];

     ll y=(hash2[1][r] - hash2[1][l-1]*p2[r-l+1])%mod[1];

     if(x<0) x+=mod[0];

     if(y<0) y+=mod[1];

     return {x,y};
}


bool check(ll mid,ll n)
{
     pair<ll,ll>x,y;

     for(ll i=1;i+mid-1<=n;i++)
     {
          x=rangehash1(1,mid);
          y=rangehash2(i,i+mid-1);

          if(x.first==y.first && x.second==y.second)
          {
               return 1;
          }
     }

     return 0;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   pwr();

   string a,b;

   test
   {
        cin>>a;

        b=a;

        reverse(b.begin(),b.end());

        hashing(a,b);

        ll sz=a.size();

        ll l=1,h=sz,mid,ans;

        while(l<=h)
        {
             mid=(l+h)/2;

             if(check(mid,sz))
             {
                  ans=mid;
                  l=mid+1;
             }
             else
             {
                  h=mid-1;
             }
        }


        for(ll i=ans-1;i>=0;i--)
        {
             cout<<a[i];
        }
        cout<<nl;
   }

   get_lost_idiot;
}

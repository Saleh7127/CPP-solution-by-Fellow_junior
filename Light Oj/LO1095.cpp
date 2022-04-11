#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

ll cm[2000][2000];
ll dear[2000];
ll f[2000];
ll mod=1e9+7;

void fact()
{
     ll i,j;
     f[0]=1;
     for(i=1;i<=1000;i++)
     {
          f[i]=(f[i-1]%mod * i)%mod;
     }
}


ll nCr(ll n,ll r)
{
     if(r==1) return n;

     if(r==n || r==0) return 1;

     if(cm[n][r]!=-1) return cm[n][r];

     cm[n][r]=(nCr(n-1,r-1)%mod + nCr(n-1,r)%mod)%mod;

     return cm[n][r];
}

ll dearrange(ll n)
{
     if(n==1) return 0;
     if(n==2 || n==0) return 1;

     if(dear[n]!=-1) return dear[n];

     dear[n]=((n-1) * (dearrange(n-1)%mod+dearrange(n-2)%mod)%mod)%mod;

     return dear[n];
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   memset(dear,-1,sizeof dear);
   memset(cm,-1,sizeof cm);

   test
   {
        ll n,m,i,j,k,l,ans=0,mk,left;

        cin>>n>>m>>k;

        left=n-m;


        for(i=0;i<=left;i++)
        {

             l=nCr(left,i);
             j=dearrange(n-k-i);

             ans=(ans + (l*j)%mod)%mod;
        }

        mk=nCr(m,k);

        ans=(mk*ans)%mod;

        cout<<"Case "<<cs<<": "<<ans<<endl;
   }

   return 0;
}

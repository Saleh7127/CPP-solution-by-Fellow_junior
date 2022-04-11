#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll mod=1e9+7;
ll cm[2000][20];

ll nCr(ll n,ll r)
{
     if(r==1) return n;

     if(r==n || r==0) return 1ll;

     if(cm[n][r]!=-1) return cm[n][r];

     cm[n][r]=(nCr(n-1,r-1)%mod + nCr(n-1,r)%mod)%mod;

     return cm[n][r];
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   cin>>n>>m;

   m*=2;

   memset(cm,-1,sizeof cm);

   l=nCr(n+m-1,m);

   cout<<l<<endl;


   return 0;
}

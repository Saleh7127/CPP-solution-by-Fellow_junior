#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
map<ll,ll>cine;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l,ans=0;
   cin>>n;
   ll a[n+5];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       cine[a[i]]++;
   }
   cin>>m;
   ll c[m+3],d[m+3];
   for(i=0;i<m;i++)
   {
       cin>>c[i];
   }
   for(i=0;i<m;i++)
   {
       cin>>d[i];
   }
   ll audi=-10000,suvt=-10000;
   for(i=0;i<m;i++)
   {
       if(audi<cine[c[i]])
       {
           ans=i+1;
           audi=cine[c[i]];
           suvt=cine[d[i]];
       }
       if(audi==cine[c[i]])
       {
           if(suvt<cine[d[i]])
           {
               ans=i+1;
               suvt=cine[d[i]];
           }
       }
   }
   cout<<ans<<endl;
   return 0;
}

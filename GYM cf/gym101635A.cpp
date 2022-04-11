#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k=0,l=0;

   cin>>n>>m;
   ll a[n+5],b[m+4];

   map<ll,ll>x;

   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<m;i++)
   {
       cin>>b[i];
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if(b[j]-a[i]>=0)
           {
               x[b[j]-a[i]]++;
           }
       }
   }

   for(auto dd:x)
   {
       if(dd.second>l)
       {
           k=dd.first;
           l=dd.second;
       }

   }

   cout<<k<<endl;

   return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   map<ll,ll>x;

   vector<ll>ans;

   ll n,m,i,j,k,l=0;

   cin>>n;

   ll a[n+5];

   for(i=0;i<n;i++)
   {
       cin>>a[i];
       x[a[i]]=x[a[i]-1]+1;
       if(l<x[a[i]])
       {
           l=x[a[i]];
           m=a[i];
       }
   }

   for(i=n-1;i>=0;i--)
   {
       if(a[i]==m)
       {
           ans.push_back(i+1);
           m--;
       }
   }

   cout<<ans.size()<<endl;

   for(i=ans.size()-1;i>=0;i--)
   {
       cout<<ans[i]<<" ";
   }
   cout<<endl;

   return 0;
}

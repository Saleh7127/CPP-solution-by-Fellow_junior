#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m=0,i,j,k,l=0;

   cin>>n;
   map<pair<ll,ll>,ll>x;
   ll a[n+5],b[n+5];

   for(i=0;i<n;i++) cin>>a[i];
   for(i=0;i<n;i++) cin>>b[i];

   for(i=0;i<n;i++)
   {
       if(a[i]==0 && b[i]==0) l++;
       else if(a[i]==0 && b[i]!=0)
       {
           continue;
       }
       else
       {
           k=__gcd(a[i],b[i]);
           x[{a[i]/k,b[i]/k}]++;
       }
   }
   for(auto h:x)
   {
       m=max(m,h.second);
   }
   cout<<m+l<<endl;
   return 0;
}

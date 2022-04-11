#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,i,j,x,y,k,l;
   cin>>n;
   map<ll,ll>a;
   for(i=0;i<n;i++)
   {
       cin>>x>>y;
       a[x]++;
       a[y]--;
   }
   j=0,k=0,l=0;
   for(auto it=a.begin();it!=a.end();it++)
   {
       j+=it->second;
       if(j>k)
       {
           k=j;
           l=it->first;
       }
   }
   cout<<l<<" "<<k<<endl;
   return 0;
}

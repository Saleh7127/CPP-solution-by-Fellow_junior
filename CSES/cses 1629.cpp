#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   vector<pair<ll,ll>>x;

   ll n,m=0,i,j,k,l=0;

   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>j>>k;
       x.push_back({k,j});
   }
   sort(x.begin(),x.end());

   for(auto s:x)
   {
       if(s.second>=l)
       {
           m++;
           l=s.first;
       }
   }
   cout<<m<<endl;
   return 0;
}

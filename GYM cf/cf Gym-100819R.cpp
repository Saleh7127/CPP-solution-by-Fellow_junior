#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   vector<pair<string,string> >a;

   ll n,i,j,k,l;
   string b,c;
   cin>>n;

   for(i=0;i<n;i++)
   {
       cin>>b>>c;
       a.push_back(make_pair(c,b));
   }
   sort(a.begin(),a.end());
   for(i=0;i<n;i++)
   {
       cout<<a[i].second<<" "<<a[i].first<<endl;
   }
   return 0;
}

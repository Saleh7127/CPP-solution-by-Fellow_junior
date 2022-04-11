#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   vector<pair<ll,ll>>x;

   ll n,m,i,j,k,l=0;

   cin>>n;

   for(i=1;i<=n;i++)
   {
       cin>>k;

       l=0;
       while(x.size())
       {
           if(x.back().first>=k)
           {
               x.pop_back();
           }
           else
           {
               l=x.back().second;
               break;
           }
       }
       if(i==n) cout<<l<<endl;
       else cout<<l<<" ";

       x.push_back({k,i});
   }

   return 0;
}

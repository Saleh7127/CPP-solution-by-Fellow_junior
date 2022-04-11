#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
      ll n,k,i,l;
      cin>>n>>k;
      vector<ll>x;
      for(i=(k+1)/2;i<=n;i++)
      {
          if(i!=k) x.push_back(i);
      }
      cout<<x.size()<<endl;

      for(auto ss: x)
      {
          cout<<ss<<" ";
      }
      cout<<endl;

   }


   return 0;
}

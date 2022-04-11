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

       ll n,i,j,k,l;
       cin>>n;
       ll a[n+5];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       set<ll>x;
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
               x.insert(a[j]-a[i]);
           }
       }
       cout<<x.size()<<endl;
   }

   return 0;
}

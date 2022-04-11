#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll d,x,y,z,j,k,l;

        cin>>d>>x>>y>>z;

        k=x*7;
        l=(d*y)+(7-d)*z;
        cout<<max(k,l)<<endl;

   }

   return 0;
}

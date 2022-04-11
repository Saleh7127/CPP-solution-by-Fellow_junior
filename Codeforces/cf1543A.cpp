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
        ll n,m,i,j,k,l;

        cin>>n>>m;

        if(n==m) cout<<"0 0"<<endl;
        else
        {
             k=min(n,m);
             j=k%abs(n-m);
             j=min(j,abs(n-m)-j);
             cout<<abs(n-m)<<" "<<j<<endl;
        }
   }

   return 0;
}

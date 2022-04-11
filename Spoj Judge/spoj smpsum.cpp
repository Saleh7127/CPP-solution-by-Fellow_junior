#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,b,c=0,i,j,k;
   cin>>a>>b;
   for(i=a;i<=b;i++)
   {
       c+=(i*i);
   }
   cout<<c<<endl;
   return 0;
}

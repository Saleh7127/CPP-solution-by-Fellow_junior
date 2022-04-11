#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d,e,i,j,k=1000000007,l=1;
   cin>>a>>c>>d;

   for(i=2;i<=c+d;i++)
   {

       l*=i;
       l%=k;
   }
   cout<<l<<endl;

   return 0;
}

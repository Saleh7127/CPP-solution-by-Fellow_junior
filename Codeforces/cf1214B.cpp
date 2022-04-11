#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll b,g,n,c=0,i,j,k,l;
   cin>>b>>g>>n;
   for(i=0;i<=b;i++)
   {
       for(j=0;j<=g;j++)
       {
           if(i+j==n) c++;
       }
   }

   cout<<c<<endl;
   return 0;
}

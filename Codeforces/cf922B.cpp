#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,ans=0,i,j,k,l;
   cin>>n;
   for(i=1;i<=n-1;i++)
   {
       for(j=i+1;j<=n;j++)
       {
           k=i^j;
           if(i+j>k && j+k>i && k+i>j && i<j && j<k && i<k && k<=n)
           {
               ans++;
           }
       }
   }
   cout<<ans<<endl;

   return 0;
}

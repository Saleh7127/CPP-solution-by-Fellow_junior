#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[1005][1005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,i,j,k,l;

   cin>>n;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           cin>>a[i][j];
       }
   }
   k=sqrt((a[0][1]*a[0][2])/a[1][2]);
   cout<<k;
   for(i=1;i<n;i++)
   {
       cout<<" "<<(a[0][i]/k);
   }
   cout<<endl;
   return 0;
}

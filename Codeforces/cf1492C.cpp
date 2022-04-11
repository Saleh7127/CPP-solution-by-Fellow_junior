#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,c,d,e,f,i,j,k,l=0;
   string a,b;
   cin>>n>>m;
   cin>>a>>b;
   vector<ll>x(m+5),y(m+5);

   for(i=0,j=0;j<n && i<m;j++)
   {
       if(a[j]==b[i])
       {
           x[i]=j;
           i++;
       }
   }

   for(i=m-1,j=n-1;i>=0 && j>=0;j--)
   {
       if(a[j]==b[i])
       {
           y[i]=j;
           i--;
       }
   }

   for(i=0;i<m-1;i++)
   {
       l=max(l,y[i+1]-x[i]);
   }

   cout<<l<<endl;


   return 0;
}

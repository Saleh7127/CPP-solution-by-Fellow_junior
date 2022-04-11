#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l,a,b,c;

   cin>>n>>a>>b>>c;

   ll x[40000];

   for(i=0;i<=4000;i++)
   {
       x[i]=-1e7;
   }

   x[0]=0;

   for(i=1;i<=n;i++)
   {
       if(i>=a)
       {
           x[i]=max(x[i],x[i-a]+1);
       }
       if(i>=b)
       {
           x[i]=max(x[i],x[i-b]+1);
       }
       if(i>=c)
       {
           x[i]=max(x[i],x[i-c]+1);
       }

   }

   cout<<x[n]<<endl;

   return 0;
}

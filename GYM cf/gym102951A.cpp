/***
 created: 2021-10-16-23.20.55
***/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

int square(int x,int x1,int y,int y1)
{
     return (x-x1)*(x-x1)+(y-y1)*(y-y1);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   int n,i,j,ans=INT_MIN;

   cin>>n;

   int x[n+2],y[n+2];

   for(i=0;i<n;i++) cin>>x[i];

   for(i=0;i<n;i++) cin>>y[i];


   for(i=0;i<n;i++)
   {
        for(j=0;j<n;j++)
        {
             int val=square(x[i],x[j],y[i],y[j]);
             ans=max(ans,val);
        }
   }

   cout<<ans<<endl;

   get_lost_idiot;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; while(tt--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,t,m,i,j,k,l,ans;

   test
   {
       cin>>n>>t>>m;

       ll a[m+10];

       for(i=1;i<=m;i++)
       {
           cin>>a[i];
       }

       k=m%n;

       if(k==0) k=n;
       ans=0;

       for(i=k;i<=m;i+=n)
       {
           ans=max(ans,a[i])+(2*t);
       }

       ///ans=a[m]+(2*t);
       l=(n+m-1)/n;
       cout<<ans-t<<" "<<l<<endl;

   }
   return 0;
}

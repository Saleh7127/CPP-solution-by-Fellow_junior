#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,ans=-1e12,i,j,k,l=0;

   cin>>n;

   while(n--)
   {
       cin>>k;

       l+=k;

       ans=max(ans,l);

       l=max(0ll,l);
   }
   cout<<ans<<endl;
   return 0;
}

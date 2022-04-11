#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000000
int main()
{
   fellow_junior
   ll n,p,ans,c,d,i,j,k,l;
   while(cin>>n>>p)
   {
       ans=1;
       c=n-p;
       for(i=n;i>c;i--)
       {
           ans*=i;
           while(ans%10==0)
           {
               ans/=10;
           }
           ans%=mod;
       }
       cout<<ans%10<<endl;
   }
   return 0;
}

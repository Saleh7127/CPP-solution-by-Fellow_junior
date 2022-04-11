#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[2000005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
       ll n,c=0;
       cin>>n;
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
       }

       ll ans[n+5]={0};

       for(ll i=n-1;i>=0;i--)
       {
           if(a[i]>c) c=a[i];
           if(c) ans[i]=1,c--;
       }
       for(ll i=0;i<n;i++)
       {
           cout<<ans[i]<<" ";
           if(i==n-1) cout<<endl;
       }

   }

   return 0;
}

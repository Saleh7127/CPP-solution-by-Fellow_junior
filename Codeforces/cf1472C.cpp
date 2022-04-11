#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll n,i,j,k,l=-1000;
       cin>>n;
       ll a[n+5];
       map<ll,ll>x;

       for(i=1;i<=n;i++)
       {
           cin>>a[i];
       }
       for(i=1;i<=n;i++)
       {
           k=0;
           if(x[i]==1) continue;
           k=0;
           for(j=i;j<=n; )
           {
               if(x[j]==1) break;
               x[j]=1;
               k+=a[j];
               j+=a[j];
           }
           l=max(l,k);
       }

       cout<<l<<endl;
   }


   return 0;
}

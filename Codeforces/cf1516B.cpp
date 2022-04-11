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
       ll n,m,i,j,k,l;

       cin>>n;

       ll a[n+5],x=0;

       for(i=1;i<=n;i++)
       {
           cin>>a[i];
           x^=a[i];
       }
       if(x==0) cout<<"YES"<<endl;
       else
       {
           k=l=0;
           for(i=1;i<=n;i++)
           {
               k^=a[i];
               if(k==x) l++,k=0;
           }
           if(l>=2) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
   }

   return 0;
}

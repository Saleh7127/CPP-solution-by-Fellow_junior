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

       ll n,m,i,j,k=-1,l=0;
       cin>>n;

       ll a[n+5];

       for(i=1;i<=n;i++)
       {
           cin>>a[i];
       }
       for(i=1;i<=n;i++)
       {
           if(a[i]>k)
           {
               a[i+1]+=(a[i]-k-1);
               k++;
           }
           else
           {
               l=1;
               break;
           }
       }
       if(l) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }


   return 0;
}

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
       ll n,m,i,j,k;
       cin>>n;


       ll a[n+5];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
           if(i==0 && a[i]!=a[i+1] && a[i]!=a[n-1]) break;
           if(i==n-1 && a[i]!=a[i-1] && a[i]!=a[0]) break;
           if(i!=0 && i!=n-1 && a[i]!=a[i-1] && a[i]!=a[i+1]) break;
       }
       cout<<i+1<<endl;
   }


   return 0;
}

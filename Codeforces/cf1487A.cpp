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

       ll n,i,j,k,l=0;
       cin>>n;
       ll a[n+5];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       for(i=1;i<n;i++)
       {
           if(a[i]>a[0]) l++;
       }
       cout<<l<<endl;
   }


   return 0;
}

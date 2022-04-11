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

       ll n,i,j,k,l;
       cin>>n>>k;
       string a(n,'a');
       for(i=n-2;i>=0;i--)
       {
           if(k<=n-i-1)
           {
               a[i]='b';
               a[n-k]='b';
               cout<<a<<endl;
               break;
           }
           k-=(n-i-1);
       }
   }

   return 0;
}

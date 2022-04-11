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
       cin>>n;
       ll a[1000];
       for(i=1;i<=n;i++)
       {
           a[i]=i;
       }
       if(n%2)
       {
           swap(a[n/2],a[(n+1)/2]);
       }
       for(i=n;i>=1;i--)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
   }


   return 0;
}

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
       ll a[n+5],b[n+5];
       for(i=0;i<n;i++)
       {
           cin>>a[i]>>b[i];
       }
       sort(a,a+n);
       sort(b,b+n);

       if(n%2==0)
       {
           k=a[n/2]-a[n/2-1];
           l=b[n/2]-b[n/2-1];
           cout<<(k+1)*(l+1)<<endl;
       }
       else
       {
           cout<<1<<endl;
       }
   }


   return 0;
}

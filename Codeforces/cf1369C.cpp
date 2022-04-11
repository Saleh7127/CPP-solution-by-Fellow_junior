#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
int main()
{
   test
   {
       ll d,e=0,f,n,k,i,j;
       cin>>n>>k;
       ll a[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       ll c[k];
       for(i=0;i<k;i++)
       {
           cin>>c[i];
       }
       sort(c,c+k);
       sort(a,a+n);
       d=n-1;
       f=n-1-k;
       for(j=0;j<k;j++)
       {
           if(c[j]==1)
           {
               e+=(2*a[d]);
               d--;
           }
           else
           {
               e+=a[d];
               d--;
               f=f-c[j]+2;
               e+=a[f];
               f--;
           }
       }
       cout<<e<<endl;
   }
   return 0;
}

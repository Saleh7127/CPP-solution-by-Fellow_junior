#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       long long a[10000],c[10000],d,e=0,f=0,i,j=0,k,l,m=100000000000,n=100000000000;
       cin>>d;
       for(i=0;i<d;i++)
       {
           cin>>a[i];
           m=min(m,a[i]);
       }
       for(i=0;i<d;i++)
       {
           cin>>c[i];
           n=min(n,c[i]);
       }
       for(i=0;i<d;i++)
       {
           if(a[i]!=m && c[i]!=n)
           {
               e=a[i]-m;
               f=c[i]-n;
               j+=max(e,f);
           }
           else
           {
               e=a[i]-m;
               f=c[i]-n;
               j+=(e+f);
           }
       }
       cout<<j<<endl;
   }
   return 0;
}

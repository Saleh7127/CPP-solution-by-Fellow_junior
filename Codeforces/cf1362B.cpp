#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   test
   {
       int n,a[10000],d,e,f,i,j,k=100000,l;
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       for(i=1;i<=1025;i++)
       {
           ll c[n];
           l=0;
           for(j=0;j<n;j++)
           {
               d=a[j]^i;
               c[l]=d;
               l++;
           }
           d=0;
           sort(c,c+l);
           for(f=0;f<n;f++)
           {
               if(a[f]!=c[f])
               {
                   d=1;
               }
           }
           if(d==0) break;

       }
       if(d==0) cout<<i<<endl;
       else cout<<-1<<endl;
   }

   return 0;
}

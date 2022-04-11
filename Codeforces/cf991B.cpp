#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   double a[1000],d=0,e,f,an=0.0;
   ll i,j=0,n;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       d+=a[i];
   }
   if(d/n>=4.5) cout<<0<<endl;
   else
   {
       sort(a,a+n);
       for(i=0;i<n;i++)
       {
           an=5-a[i];
           if(an>0)
           {
               j++;
               d=d+an;
               if(d/n>=4.5) break;
           }
       }
       cout<<j<<endl;
   }
   return 0;
}

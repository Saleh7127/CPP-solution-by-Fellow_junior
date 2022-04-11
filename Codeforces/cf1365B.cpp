#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
int main()
{
   Faster
   test
   {
       ll a[1000],c[1000],n,d=0,e=0,f=0,i,j,k,l;
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
           cin>>c[i];
           if(c[i]) e++;
           else f++;
       }
       for(i=0;i<n-1;i++)
       {
           if(a[i]>a[i+1])
           {
               d=1;
           }
       }

       if(!d || (e && f)) yes
       else no
   }
   return 0;
}

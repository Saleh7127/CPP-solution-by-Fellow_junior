#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   ll a[100000],c;
   double ans=0.0,x;
   ll i,j,k,l;
   cin>>k;
   for(i=0;i<k;i++)
   {
       cin>>a[i];
   }
   sort(a,a+k,greater<int>());
   for(i=0;i<k;i++)
   {
       if(i%2==0)
       {
           ans+=pi*a[i]*a[i];
       }
       else if(i%2==1)
       {
           ans-=pi*a[i]*a[i];
       }
   }
   printf("%.10lf\n",ans);
   return 0;
}

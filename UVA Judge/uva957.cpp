#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   Faster
   ll y,n;
   while(cin>>y && y)
   {
       cin>>n;
       ll a[n],c,d,e,f,i,j,maxx=0,lo,hi;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
           c=0;
           j=i;
           ll limit=a[i]+y-1;
           while(a[j]<=limit)
           {
               c++;
               j++;
           }
           if(c>maxx)
           {
               maxx=c;
               lo=a[i];
               hi=a[j-1];
           }
       }
       printf("%lld %lld %lld\n",maxx,lo,hi);
   }
   return 0;
}

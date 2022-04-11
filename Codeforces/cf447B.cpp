#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{

   string a;
   ll c[26],k,i,j,l,ma=0,total=0;
   cin>>a;
   cin>>k;
   for(i=0;i<26;i++)
   {
       cin>>c[i];
       if(c[i]>ma)
       {
           ma=c[i];
       }
   }
   l=a.size();
   for(i=0,j=1;i<l;j++,i++)
   {
       total+=j*(c[a[i]-97]);
   }
   for(i=1;i<=k;i++)
   {
       total+=ma*(l+i);
   }
   printf("%lld\n",total);
   return 0;
}


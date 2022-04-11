#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[1000],c,d,e,f,i,j,k,l;
   cin>>c;
   for(i=1;i<=c;i++)
   {
       cin>>a[i];
   }
   cin>>d;
   while(d--)
   {
       cin>>e>>f;
       if(e-1>=1)
       {
           a[e-1]+=(f-1);
       }
       if(e+1<=c)
       {
           a[e+1]+=(a[e]-f);
       }
       a[e]=0;
   }
   for(i=1;i<=c;i++)
   {
       cout<<a[i]<<endl;
   }
   return 0;
}

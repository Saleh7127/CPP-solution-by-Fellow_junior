#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[200000],c,d=0,e=0,f,i,j,k=0,l=0;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
       d+=a[i];
   }
   if(d%3)
   {
       cout<<0<<endl;
       return 0;
   }
   d/=3;
   for(i=0;i<c-1;i++)
   {
        e+=a[i];
        if(e==2*d) l+=k;
        if(e==d) k++;
   }
   cout<<l<<endl;
   return 0;
}

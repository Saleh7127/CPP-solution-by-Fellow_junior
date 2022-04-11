#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[200000],c,d=0,e,f,i,j,k,l=100000000000;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
       if(a[i]==1) d++;
   }
   if(d)
   {
       cout<<c-d<<endl;
       return 0;
   }
   for(i=0;i<c;i++)
   {
       f=a[i];
       for(j=i+1;j<c;j++)
       {
           f=__gcd(f,a[j]);
           if(f==1)
           {
               l=min(l,(j-i));
           }
       }

   }
   if(l==100000000000) cout<<-1<<endl;
   else cout<<l+(c-1)<<endl;
   return 0;
}

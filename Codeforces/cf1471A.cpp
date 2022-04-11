#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {

       ll a[200005],b,c,d=0,e=0,f=0,i,j,k,l;
       cin>>b>>c;
       for(i=0;i<b;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<b;i++)
       {
           if(a[i]%c==0) d+=(a[i]/c);
           else e+=a[i];
       }
       for(i=0;i<b;i++)
       {
           if(a[i]%c==0) f+=(a[i]/c);
           else f+=(1+a[i]/c);
       }
       if(e%c==0) d+=(e/c);
       else d+=(1+e/c);
       cout<<min(d,f)<<" "<<max(d,f)<<endl;
   }

   return 0;
}

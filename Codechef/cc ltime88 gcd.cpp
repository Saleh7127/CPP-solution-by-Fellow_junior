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
       ll a[10005],c[10005],d,e,f,i,j=0,k,l;
       cin>>d;
       for(i=1;i<=d;i++)
       {
           cin>>a[i];
       }
       for(i=1;i<=d;i++)
       {
           if(a[i]!=i)
           {
               if(__gcd(i,a[i])==a[i])
               {
                   continue;
               }
               else j=1;
           }
       }
       if(j) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }


   return 0;
}

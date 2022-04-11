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

       ll n,m,a[1000],b[1000],c=0,d=0,e=0,f=0,i,j,k,l;
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       cin>>m;
       for(i=0;i<m;i++)
       {
           cin>>b[i];
       }
       for(i=0;i<n;i++)
       {
           c+=a[i];
           d=max(d,c);
       }
       for(i=0;i<m;i++)
       {
           e+=b[i];
           f=max(f,e);
       }

       cout<<d+f<<endl;

   }


   return 0;
}

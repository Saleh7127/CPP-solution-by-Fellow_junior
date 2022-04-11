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
       ll n,m,i,j,k,l;
       ll a[10000],b[10000],c=0,d=0,e,f;

       cin>>n>>m;
       for(i=0;i<n-1;i++)
       {
           cin>>a[i];
           c+=a[i];
       }
       for(i=0;i<m;i++)
       {
           cin>>b[i];
           d+=b[i];
       }
       if(c%(n-1)==0) e=c/(n-1)-1;
       else e=c/(n-1);

       f=d/m;

       cout<<f+1<<" "<<e<<endl;
   }



   return 0;
}

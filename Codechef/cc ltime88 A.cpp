
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
       ll a[10000],c,d=0,e,f,i,j,k,l;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
           d+=a[i];
       }
       if(d>=0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}

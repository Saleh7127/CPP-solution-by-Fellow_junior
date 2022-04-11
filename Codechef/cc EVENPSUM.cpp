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
       ll a,b,c,d,e,f,i,j,k,l;
       cin>>a>>b;
       c=a/2;
       d=(a+1)/2;
       e=b/2;
       f=(b+1)/2;
       k=(c*e)+(d*f);
       cout<<k<<endl;
   }


   return 0;
}

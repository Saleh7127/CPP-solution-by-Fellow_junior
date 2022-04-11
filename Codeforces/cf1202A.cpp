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
       string a,b;
       ll c=0,d=0,i,j,k,l;
       cin>>a;
       cin>>b;
       reverse(a.begin(),a.end());
       reverse(b.begin(),b.end());
       while(b[c]!='1')
       {
           c++;
       }
       d=c;
       while(a[d]!='1')
       {
           d++;
       }
       cout<<d-c<<endl;
   }


   return 0;
}

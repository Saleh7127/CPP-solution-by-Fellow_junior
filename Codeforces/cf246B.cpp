#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll a,c,d,e,f,i,j,k,l;

   cin>>a;
   e=a;
   d=0;
   while(e--)
   {
       cin>>c;
       d+=c;
   }
   if(d%a) cout<<a-1<<endl;
   else cout<<a<<endl;
   return 0;
}

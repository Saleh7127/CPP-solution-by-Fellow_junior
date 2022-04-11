#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   map<string,string>x;

   string a,c;
   ll e,d,i,j,k,l;

   cin>>d>>e;
   while(d--)
   {
       cin>>a>>c;
       c+=';';
       x[c]=a;
   }
   while(e--)
   {
       cin>>a>>c;
       cout<<a<<" "<<c<<" #";
       cout<<x[c]<<endl;
   }

   return 0;
}

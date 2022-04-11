#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,i,j,l;
   string x;
   cin>>a;
   for(i=0;i<=a;i++)
   {
       cin>>x;
   }
   if(a%2==0) cout<<"home"<<endl;
   else cout<<"contest"<<endl;

   return 0;
}

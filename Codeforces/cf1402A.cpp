#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d,e=0,i,j,k,l;
   cin>>d;
   while(d--)
   {
       cin>>a>>c;
       e+=(a*c)*3;
   }
   cout<<e<<endl;


   return 0;
}

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

       ll a,c,d,e,i,j,k,l;
       cin>>a>>c;
       d=(a^a)+(c^a);
       e=(a^c)+(c^c);
       cout<<min(d,e)<<endl;

   }



   return 0;
}

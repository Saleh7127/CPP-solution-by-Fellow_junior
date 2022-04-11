#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll a,c,d,e,f,i,j,k,l;
       cin>>a>>c;
       d=abs(a-c);
       if(d%10==0) cout<<d/10<<endl;
       else cout<<1+d/10<<endl;


   }


   return 0;
}

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
       ll n,i,j,k1,k2,l,b,w;

       cin>>n>>k1>>k2;

       cin>>w>>b;
       j=(2*n)-(k1+k2);
       ll x=(k1+k2)/2;
       if(w<=x && b<=(j/2))
       {
            cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }

   }

   return 0;
}

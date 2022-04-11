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
       ll n,m,i,j,k,l=0;

       cin>>n;

       while(n--)
       {
           cin>>m;
           k=sqrt(m);
           if((k*k)!=m)
           {
               l=1;
           }
       }
       if(l) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}

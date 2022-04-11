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
       ll n,m,a,b,c,d,e=0,f,i,j,k,l;
       cin>>n>>m;

       while(n--)
       {
           cin>>a>>b;
           cin>>c>>d;
           if(c==b)
           {
               e=1;
           }
       }
       if(m%2) cout<<"NO"<<endl;
       else
       {
           if(e) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
   }


   return 0;
}

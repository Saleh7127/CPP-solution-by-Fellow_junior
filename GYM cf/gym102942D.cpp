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
       ll a,b,c,d,e,f,i,j,k,l=0;

       cin>>a>>b;

       k=(a^b);

       for(i=1;i<=max(a,b);i++)
       {
           if((a^i)>k)
           {
               l=1;
               break;
           }
       }

       if(l)
       {
           cout<<"Yes"<<endl;
       }
       else cout<<"No"<<endl;
   }


   return 0;
}

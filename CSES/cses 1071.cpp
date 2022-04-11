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
       ll a,b,c,d,e,g,i,j,l;
       cin>>a>>b;
       if(a<b)
       {
           if(b%2==0)
           {
               cout<<(b-1)*(b-1)+a<<endl;
           }
           else cout<<(b*b)+1-a<<endl;
       }
       else
       {
           if(a%2==1)
           {
               cout<<(a-1)*(a-1)+b<<endl;
           }
           else cout<<(a*a)+1-b<<endl;
       }
   }


   return 0;
}

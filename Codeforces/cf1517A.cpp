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

       ll n,m,i,j,k;

       cin>>n;

       if(n%2050!=0) cout<<-1<<endl;
       else
       {
           k=n/2050;
           j=0;
           while(k)
           {
               j+=(k%10);
               k/=10;
           }
           cout<<j<<endl;
       }

   }


   return 0;
}

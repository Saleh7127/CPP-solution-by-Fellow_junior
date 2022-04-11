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
       ll n,a,b,c,d,e,f,i,j,k,l;
       cin>>n>>k;
       a=n;
       for(i=1; ;i++)
       {
           c=pow(k,i);
           if(c>a) break;

           if(i%2)
           {
               n-=(a/c);
           }
           else n+=(a/c);
       }
       cout<<n<<endl;

   }

   return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,k,a,c=0,d,i,j,l;
   cin>>n>>k;
   while(n--)
   {
       cin>>a;
       if(a<=3*k)
       {
           c+=(a%k);
       }
       else c+=(a-3*k);
   }
   cout<<c<<endl;
   return 0;
}

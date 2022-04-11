#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l=1;

   cin>>n;

   if(n<=10) cout<<1<<endl;
   else
   {
       k= n-n/2 - n/3 - n/5 -n/7 ;
       k+=(n/6+ n/10 + n/14 +n/15 + n/21 +n/35 );
       k-=(n/30 + n/42 + n/105 + n/70 ) ;
       k+= n/210;
       cout<<k<<endl;
   }

   return 0;
}

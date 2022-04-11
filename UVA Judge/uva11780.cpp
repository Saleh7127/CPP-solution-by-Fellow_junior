#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a;
   double c,ans;
   while(cin>>a && a)
   {
       c=a*1.6;
       ans=min(ceil(c)-c,c-floor(c));
       ///ceil and floor er sathe actual minimum tai ans
       printf("%.2lf\n",ans);
   }


   return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   Faster
   ll ca=1;
   test
   {
       ll a;
       scanf("%lld",&a);
       ll r=0,c=0;
       ll cell = ceil(sqrt(a));
       ll flr = floor(sqrt(a));
       ll sqcell = (cell*cell)-a;
       ll sqflr = a-(flr*flr);
       if(cell>sqcell)
       {
           c=sqcell+1;
           r=cell;
       }
       else
       {
           c=cell;
           r=sqflr;
       }
       if(cell%2==0) swap(r,c);
       printf("Case %lld: %lld %lld\n",ca++,c,r);
   }

   return 0;
}

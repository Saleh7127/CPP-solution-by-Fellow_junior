#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
ll a[1000000];
int main()
{
   ll c,d=0,i,j;
   cin>>c;
   for(i=1;i<=c;i++)
   {
       cin>>a[i];
   }
   sort(a+1,a+c+1);
   for(i=1;i<=c;i++)
   {
       d+=abs(a[i]-i);
   }
   cout<<d<<endl;

   return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   long long a,c,d,e,i,j;
   cin>>a>>c;
   d=1;
   for(i=1;i<=a+c;i++)
   {
       d=(d*2)%998244353;
   }
   cout<<d%992844353<<endl;

   return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int a,c,d=0,e,f,i,j,k,l;
   cin>>a>>c;
   for(i=1;i<=a;i++)
   {
       d+=(c+i%5)/5;
   }

   cout<<d<<endl;
   return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t;
   cin>>t;
   while(t--)
   {

       int a,c,d=0,e=0,f,i,j,k,l;
       cin>>a>>c;
       d=a-(a%c);
       d+=min(a%c,c/2);
       cout<<d<<endl;
   }
   return 0;
}

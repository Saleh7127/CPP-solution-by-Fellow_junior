#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long s,a,b,c,d,e,f,i,j,t,l;
   cin>>t;
   while(t--)
   {
       e=0;
       cin>>s>>a>>b>>c;
       e=(s/c)+((s/c)/a)*b;
       cout<<e<<endl;

   }
   return 0;
}

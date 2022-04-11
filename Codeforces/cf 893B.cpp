#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,b,c,d,e=1,i,j,k,l;

   cin>>a;

   for(i=1;i<=32;i++)
   {
       k=pow(2,i)-1;
       l=pow(2,i-1);
       j=k*l;
       if(a%j==0)
       {
           e=max(e,j);
       }
   }
   cout<<e<<endl;

   return 0;
}

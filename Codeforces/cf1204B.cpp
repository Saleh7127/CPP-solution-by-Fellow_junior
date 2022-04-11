#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   ll a,c=0,d=0,e,f,i,j,k,l,r;
   cin>>a>>l>>r;
   for(i=0;i<=l-1;i++)
   {
       c+=pow(2,i);
   }
   for(i=0;i<a-l;i++)
   {
       c+=1;
   }
   for(i=0;i<=r-1;i++)
   {
       d+=pow(2,i);
   }
   for(i=0;i<a-r;i++)
   {
       d+=pow(2,r-1);
   }
   cout<<c<<" "<<d<<endl;
   return 0;
}

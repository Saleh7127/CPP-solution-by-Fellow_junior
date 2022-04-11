#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll a,c,d=0,e,i,k,l;
   cin>>a;
   c=1;
   for(i=1;i<=a;i++)
   {
       c*=2;
       d+=c;
   }
   cout<<d<<endl;
   return 0;
}

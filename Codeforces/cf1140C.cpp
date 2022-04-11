#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c=0,d,i,j,k;
   cin>>a;
   for(i=2;i<a;i++)
   {
       c+=(i*(i+1));
   }
   cout<<c<<endl;

   return 0;
}

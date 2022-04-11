#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d,e,x,y,i,j,k,l;
   cin>>a>>c>>d>>e;

   x=a*e;
   y=a*d;
   i=c*e;
   j=c*d;
   cout<<max(x,max(y,max(i,j)))<<endl;

   return 0;
}

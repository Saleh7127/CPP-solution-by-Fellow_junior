#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   double s,p,n,m,a,b,c,e,f;
   cin>>s>>p;
   c=sqrt((s*s)-(4*p));
   a=(s+c)/2;
   b=(s-c)/2;
   if(a+b==s && a*b==p) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
   return 0;
}

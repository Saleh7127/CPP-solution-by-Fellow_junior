#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll a,b;
   cin>>a>>b;
   if(b%a!=0) cout<<1+b/a<<endl;
   else cout<<b/a<<endl;

   return 0;
}

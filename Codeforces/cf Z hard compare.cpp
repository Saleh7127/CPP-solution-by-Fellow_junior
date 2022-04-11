#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll a,c,d,e,f;
   cin>>a>>c>>d>>e;
   if(c*log(a)>e*log(d)) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,b,c,d;

   cin>>a>>b;

   c=__gcd(b,abs(a-b));



   if(c!=b || a==b) cout<<-1<<endl;
   else cout<<abs(a-b)<<" "<<b<<endl;


   return 0;
}


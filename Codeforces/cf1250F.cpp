#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,b,c;
   cin>>a;
   b=sqrt(a);

  for(ll i=b;i>=1;i--)
  {
      if(a%i==0)
      {
          c=a/i;
          c+=i;
          c+=c;
          break;
      }
  }
  cout<<c<<endl;

   return 0;
}

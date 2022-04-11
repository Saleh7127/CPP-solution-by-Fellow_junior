#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    Faster
  test
  {
      ll n,ans;
      cin>>n;
      ans=n;
      while(n>=1)
      {
          ans+=(n/2);
          n=n/2;
      }
      cout<<ans<<endl;
  }
   return 0;
}

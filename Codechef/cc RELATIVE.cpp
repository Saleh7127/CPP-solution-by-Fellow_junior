#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll g,c,ans;

        cin>>g>>c;

        ans=(c*c)/(2*g);

        cout<<ans<<endl;
   }

   return 0;
}

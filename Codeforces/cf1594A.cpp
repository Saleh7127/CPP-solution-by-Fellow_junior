#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m;

        cin>>n;

        if(n%2)
        {
             cout<<n/2<<" "<<(n+1)/2<<endl;
        }
        else
        {
             cout<<-(n-1)<<" "<<n<<endl;
        }
   }

   return 0;
}

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
        ll n,m,i,j,k,l;

        cin>>n;

        if(n%2==0)
        {
             for(i=1;i<=n;i+=2)
             {
                  cout<<i+1<<" "<<i<<" ";
             }
             cout<<endl;
        }
        else
        {
             for(i=1;i<=n-3;i+=2)
             {
                  cout<<i+1<<" "<<i<<" ";
             }
             cout<<n-1<<" "<<n<<" "<<n-2<<endl;
        }
   }

   return 0;
}

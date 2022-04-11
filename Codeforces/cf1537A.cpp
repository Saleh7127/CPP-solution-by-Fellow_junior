#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l=0;

        cin>>n;

        for(i=0;i<n;i++)
        {
             cin>>m;
             l+=m;
        }
        if(l>=n) cout<<l-n<<endl;
        else cout<<1<<endl;
   }

   return 0;
}

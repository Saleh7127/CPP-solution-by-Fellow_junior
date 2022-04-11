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

        ll n,m,i,j,k=0,r,l;
        cin>>n>>l>>r;
        ll a[n+4];

        for(i=1;i<=n;i++) cin>>a[i];

        sort(a+1,a+n+1);

        for(i=1;i<=n;i++)
        {
            k+=upper_bound(a + i + 1, a + n + 1, r - a[i]) - lower_bound(a + i + 1, a + n + 1, l - a[i]);
        }
        cout<<k<<endl;
   }

   return 0;
}

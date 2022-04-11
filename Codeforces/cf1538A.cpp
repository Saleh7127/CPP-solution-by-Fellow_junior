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
        ll n,m,i,j,k=0,l=0;

        cin>>n;
        ll a[n+4];

        for(i=1;i<=n;i++)
        {
             cin>>a[i];
             if(a[i]==n) l=i;
             if(a[i]==1) k=i;
        }

        if(l>k) swap(l,k);

        ll ans=min(k,n-l+1);
        ans=min(ans,l+n-k+1);

        cout<<ans<<endl;

   }


   return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll a[200005],n;

ll solve(ll m)
{
     vector<ll>x;
     ll ans=0;
     for(ll i=0;i<n;i++)
     {
          if(a[i]%2==m) x.push_back(i);
     }

     if(x.size()!=(n+1)/2) return -1;

     for(ll i=0,j=0;i<n;i+=2,j++)
     {
          ans+=abs(x[j]-i);
     }
     return ans;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll m,i,j,k,l;

        cin>>n;

        for(i=0;i<n;i++)
        {
             cin>>a[i];
        }

        if(n==1)
        {
             cout<<0<<endl;
             continue;
        }

        j=solve(0);
        k=solve(1);

        if(j==-1) cout<<k<<endl;
        else if(k==-1) cout<<j<<endl;
        else cout<<min(j,k)<<endl;
   }


   return 0;
}

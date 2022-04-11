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
        ll n,m,i,j,k,l=0;
        cin>>n;
        ll a[n+5];
        map<ll,ll>x;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<(1<<n);i++)
        {
             k=0;
             for(j=0;j<n;j++)
             {
                  if(i & (1<<j))
                  {
                       k+=a[j];
                  }
             }
             x[k]++;
        }

        for(auto d:x)
        {
             if(d.second>1)
             {
                  l=1;
                  cout<<"YES"<<endl;
                  break;
             }
        }
        if(!l) cout<<"NO"<<endl;
   }

   return 0;
}

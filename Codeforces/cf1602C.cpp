/***
 created: 2022-01-30-16.04.49
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k,l;

        cin>>n;

        ll a[n+4],b[42]={0};

        for(i=1;i<=n;i++) cin>>a[i];

        for(i=0;i<31;i++)
        {
             for(j=1;j<=n;j++)
             {
                  if((a[j] & (1<<i))) b[i]++;
             }
        }

        vector<ll>ans;

        for(i=1;i<=n;i++)
        {
             l=0;
             for(j=0;j<31;j++)
             {
                  if(b[j]%i!=0)
                  {
                       l=1;
                       break;
                  }
             }
             if(!l) ans.push_back(i);
        }

        for(auto d:ans) cout<<d<<" ";

        cout<<nl;
   }


   get_lost_idiot;
}

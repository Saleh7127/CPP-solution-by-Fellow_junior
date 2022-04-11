/***
 created: 2022-02-02-20.08.00
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
        ll n,m=0,i,j,k,l=0;

        cin>>n;

        ll parent[n+4],p[n+4];

        for(i=1;i<=n;i++)
        {
             cin>>parent[i];
             if(i==parent[i] && l==0)
             {
                  l=i;
             }
        }

        for(i=1;i<=n;i++) cin>>p[i];

        if(p[1]!=l)
        {
             cout<<-1<<nl;
             continue;
        }

        vector<ll>w(n+2,-1),ans(n+2,-1);

        ans[p[1]]=0,w[p[1]]=0;

        j=0;

        for(i=2;i<=n;i++)
        {
             l=p[i];
             k=parent[l];

             if(w[k]==-1)
             {
                  m=-1;
                  break;
             }
             ans[l]=j+1-w[k];
             w[l]=j+1;
             j++;
        }

        if(m!=0)
        {
             cout<<m<<nl;
             continue;
        }

        for(i=1;i<=n;i++)
        {
             cout<<ans[i]<<" ";
        }

        cout<<nl;

   }
   get_lost_idiot;
}

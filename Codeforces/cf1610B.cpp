/***
 created: 2021-11-23-20.32.37
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

        ll a[n+4];

        for(i=1;i<=n;i++)
        {
             cin>>a[i];
        }

        for(i=1;i<=n;i++)
        {
             if(a[i]!=a[n-i+1])
             {
                  k=a[i];
                  l=a[n-i+1];
             }
        }

        vector<ll>x,y;

        for(i=1;i<=n;i++)
        {
             if(a[i]!=k) x.push_back(a[i]);
        }
        for(i=1;i<=n;i++)
        {
             if(a[i]!=l) y.push_back(a[i]);
        }


        l=0;
        for(i=0;i<x.size();i++)
        {
             if(x[i]!=x[x.size()-i-1])
             {
                  l++;
                  break;
             }
        }
        for(i=0;i<y.size();i++)
        {
             if(y[i]!=y[y.size()-i-1])
             {
                  l++;
                  break;
             }
        }


        if(l==2) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
   }



   get_lost_idiot;
}


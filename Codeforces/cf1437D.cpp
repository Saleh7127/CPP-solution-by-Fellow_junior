/***
 created: 2022-01-09-16.04.49
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

        for(i=1;i<=n;i++) cin>>a[i];

        ll parent[n+4]={0};

        vector<ll>x;

        x.push_back(a[1]);
        x.push_back(a[2]);

        parent[a[2]]=1;

        j=0;

        for(i=3;i<=n;i++)
        {
             x.push_back(a[i]);

             if(a[i]<a[i-1]) j++;

             parent[a[i]]=x[j];
        }

        l=0;
        j=a[n];

        while(j!=1)
        {
             l++;
             j=parent[j];
        }

        cout<<l<<nl;

   }


   get_lost_idiot;
}

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
        ll n,m,i,j=1e9,k,l;

        cin>>n;

        ll a[n+4];

        vector<pair<ll,pair<ll,ll>>>x;

        for(i=1;i<=n;i++)
        {
             cin>>a[i];
        }

        for(i=1;i<=n;i++)
        {
             l=1e9;
             k=i;

             for(j=i;j<=n;j++)
             {
                  if(a[j]<=l)
                  {
                       l=a[j];
                       k=j;
                  }
             }

             if(k==i) continue;
             x.push_back({i,{k,k-i}});

             for(j=k;j>i;j--)
             {
                  a[j]=a[j-1];
             }
        }

        cout<<x.size()<<endl;

        for(auto d:x)
        {
             cout<<d.first<<" "<<d.second.first<<" "<<d.second.second<<endl;
        }
   }

   return 0;
}


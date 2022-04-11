#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

bool cmp(pair<ll,ll>a, pair<ll,ll>b)
{
     if(a.first<b.first) return 1;
     if(a.first==b.first)
     {
          if(a.second<=b.second) return 1;
          return 0;
     }
     return 0;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l=0;

        cin>>n;

        ll a[n+4];

        vector<pair<ll,ll>>x;

        for(i=1;i<=n;i++)
        {
             cin>>a[i];
             x.push_back({a[i],i});
        }

        sort(x.begin(),x.end(),cmp);

        for(i=0;i<n-1;i++)
        {
             for(j=i+1;j<n;j++)
             {
                  k= x[i].first * x[j].first;
                  m= x[i].second + x[j].second;

                  if(k>(2*n-1)) break;

                  if(k==m) l++;
             }
        }

        cout<<l<<endl;
   }

   return 0;
}

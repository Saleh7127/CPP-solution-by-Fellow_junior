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
        ll n,m,i,j,k,l,g;

        cin>>n;

        vector<ll>x;
        priority_queue<pair<ll,ll>>a;
        vector<pair<ll,ll>>y;

        for(i=0;i<n;i++)
        {
             cin>>m;
             if(m)
             {
                  a.push({m,i+1});
             }
        }

        m=0;

        while(a.size()>1)
        {
             i=a.top().first;
             j=a.top().second;

             a.pop();

             l=a.top().first;
             g=a.top().second;

             a.pop();

             i--;
             l--;

             y.push_back({j,g});

             if(i>0)
             {
                  a.push({i,j});
             }
             if(l>0)
             {
                  a.push({l,g});
             }
        }

        cout<<y.size()<<endl;

        for(auto d:y)
        {
             cout<<d.first<<" "<<d.second<<endl;
        }

   }


   return 0;
}


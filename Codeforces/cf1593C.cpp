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
        ll n,m,k,i,j=0,l=0;

        cin>>n>>k;

        vector<pair<ll,ll>>x;

        map<ll,ll>y;

        for(i=0;i<k;i++)
        {
             cin>>m;
             y[m]++;
        }

        for(auto dd:y)
        {
             x.push_back({dd.first,dd.second});
        }

        sort(x.rbegin(),x.rend());

        for(auto d:x)
        {
             while(d.second--)
             {
                  if(j<d.first)
                  {
                       l++;
                       j+=(n-d.first);
                  }
                  else break;
             }
        }

        cout<<l<<endl;
   }


   return 0;
}


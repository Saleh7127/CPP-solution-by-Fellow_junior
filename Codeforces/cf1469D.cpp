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
        ll n,m,i,j,k,l;

        cin>>n;

        vector<pair<ll,ll>>x;

        while(n>2)
        {
             m=sqrt(n-1)+1;

             for(i=m+1;i<n;i++)
             {
                  x.push_back({i,n});
             }

             x.push_back({n,m});
             x.push_back({n,m});

             n=m;

        }

        cout<<x.size()<<endl;
        for(auto dd:x)
        {
             cout<<dd.first<<" "<<dd.second<<endl;
        }
   }


   return 0;
}

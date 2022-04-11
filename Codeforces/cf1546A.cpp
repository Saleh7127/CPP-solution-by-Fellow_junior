#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<pair<int,int>>x,y,z;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        int n,m,i,j,k=0,l;

        cin>>n;

        int a[102],b[102];

        for(i=1;i<=n;i++)
        {
             cin>>a[i];
             k+=a[i];
        }
        for(i=1;i<=n;i++)
        {
             cin>>b[i];
             k-=b[i];
        }

        if(k)
        {
             cout<<-1<<endl;
             continue;
        }

        x.clear(),y.clear(),z.clear();

        for(i=1;i<=n;i++)
        {
             if(a[i]>b[i])
             {
                 x.push_back({i,a[i]-b[i]});
             }
             if(a[i]<b[i])
             {
                 y.push_back({i,b[i]-a[i]});
             }
        }

        for(i=x.size()-1,j=y.size()-1;i>=0 && j>=0;)
        {
             z.push_back({x[i].first,y[j].first});
             x[i].second--;
             y[j].second--;

             if(x[i].second==0) i--;
             if(y[j].second==0) j--;

        }

        cout<<z.size()<<endl;

        for(auto dd:z)
        {
             cout<<dd.first<<" "<<dd.second<<endl;
        }

   }

   return 0;
}

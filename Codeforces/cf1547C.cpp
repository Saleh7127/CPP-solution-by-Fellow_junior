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
        ll n,m,i,j,k,l=0;

        cin>>k>>n>>m;

        ll a[n+4],b[m+4];

        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<m;i++) cin>>b[i];

        i=j=0;

        vector<ll>x;

        while(i!=n || j!=m)
        {
             if(i!=n && a[i]==0)
             {
                 x.push_back(0);
                 k++;
                 i++;
             }
             else if(j!=m && b[j]==0)
             {
                 x.push_back(0);
                 k++;
                 j++;
             }
             else if(i!=n && a[i]<=k)
             {
                 x.push_back(a[i]);
                 i++;
             }
             else if(j!=m && b[j]<=k)
             {
                 x.push_back(b[j]);
                 j++;
             }
             else
             {
                  l=1;
                  break;
             }
        }

        if(l) cout<<-1<<endl;
        else
        {
             for(auto d:x)
             {
                  cout<<d<<" ";
             }
             cout<<endl;
        }
   }


   return 0;
}

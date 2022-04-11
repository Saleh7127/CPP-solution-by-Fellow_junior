#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
       ll n,m,i,j,k,l,b,c=0;

       cin>>n>>m;

       vector<ll>x[m+5];
       vector<pair<ll,ll>>a;
       map<ll,ll>y;
       ll ans[m+5]={0};

       l=(m+1)/2;

       for(i=0;i<m;i++)
       {
           cin>>k;
           for(j=0;j<k;j++)
           {
               cin>>b;
               x[i+1].push_back(b);
           }
           a.push_back({k,i+1});
       }
       sort(a.begin(),a.end());

       for(i=0;i<a.size();i++)
       {
           for(j=0;j<x[a[i].second].size();j++)
           {
               if(y[x[a[i].second][j]]<l)
               {
                   c++;
                   y[x[a[i].second][j]]++;
                   ans[a[i].second]=x[a[i].second][j];
                   break;
               }
           }
       }

       if(c==m)
       {
           cout<<"YES"<<endl;
           for(i=1;i<=m;i++)
           {
               cout<<ans[i]<<" ";
           }
           cout<<endl;
       }
       else cout<<"NO"<<endl;
   }

   return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

bool check(pair<ll,ll>a,pair<ll,ll>b)
{
     //if(a.first>b.first) swap(a,b);

     return (a.second>b.first && a.second<b.second);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll n,i,j,k,l=0,a,b;

       cin>>n>>k;

       vector<pair<ll,ll>>x;
       vector<ll>y;
       bool v[2*n+4]={0};

       for(i=0;i<k;i++)
       {
            cin>>a>>b;
            if(a>b) swap(a,b);
            x.push_back({a,b});
            v[a]=v[b]=1;
       }

       for(i=1;i<=2*n;i++)
       {
            if(v[i]==0) y.push_back(i);
       }

       for(i=0;i<n-k;i++)
       {
            x.push_back({y[i],y[n-k+i]});
       }

       for(i=0;i<n;i++)
       {
            for(j=i+1;j<n;j++)
            {
                 if(check(x[i],x[j]))
                 {
                      l++;
                 }
            }
       }

       cout<<l<<endl;
   }

   return 0;
}

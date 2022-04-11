#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
     return a.second>b.second;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l=0;

   cin>>n;

   vector<pair<ll,ll>>x(n);

   for(i=0;i<n;i++)
   {
        cin>>x[i].first>>x[i].second;
        l+=x[i].first;
   }

   sort(x.begin(),x.end(),cmp);

   i=0,
   k=l;

   while(i<n && k>0)
   {
        if(x[i].second>=k)
        {
             i++;
        }
        else
        {
             m=min(k-x[i].second,x[i].first);
             k-=m;
             i++;
        }
   }

   cout<<l+k<<endl;
   return 0;
}


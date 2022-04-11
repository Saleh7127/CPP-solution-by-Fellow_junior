#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);



   ll n,m,i,j,k=0,l=0;


   cin>>n>>m;
   string s;
   map<string,ll>x;

   ll a[n+5];

   for(i=0;i<n;i++) cin>>a[i];

   sort(a,a+n);

   for(i=0;i<m;i++)
   {
        cin>>s;
        x[s]++;
   }

   vector<ll>y;

   for(auto d:x)
   {
        y.push_back(d.second);
   }

   sort(y.begin(),y.end(),greater<ll>());

   for(i=0;i<y.size();i++)
   {
        k+=(y[i]*a[i]);
   }

   for(i=0;i<y.size();i++)
   {
        l+=(y[i]*a[n-i-1]);
   }

   cout<<k<<" "<<l<<endl;
   return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,k,x,i,j,l=0;;
   cin>>n>>k>>x;

   ll a[n+5];
   vector<ll>dis;
   for(i=0;i<n;i++) cin>>a[i];

   sort(a,a+n);

   for(i=0;i<n-1;i++)
   {
        if(a[i+1]-a[i]>x)
        {
             l=(a[i+1]-a[i]-1)/x;
             dis.push_back(l);
        }
   }

   sort(dis.begin(),dis.end());

   l=dis.size()+1;

   j=0;

   for(i=0;i<dis.size();i++)
   {
        j+=dis[i];
        if(j<=k) l--;
   }

   cout<<l<<endl;

   return 0;
}


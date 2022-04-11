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
        ll n,m,i,j,k,l;

        cin>>n;

        ll a[n+5];

        for(i=0;i<n;i++) cin>>a[i];

        cin>>m;

        while(m--)
        {
             cin>>k>>l;
             vector<ll>x;


             if((l-k+1)>1e4)
             {
                  cout<<0<<endl;
                  continue;
             }

             for(i=k-1;i<l;i++)
             {
                  x.push_back(a[i]);
             }
             sort(x.begin(),x.end());

             l=1e8;

             for(i=1;i<x.size();i++)
             {
                  l=min(l,x[i]-x[i-1]);
             }
             cout<<l<<endl;
        }
   }


   return 0;
}



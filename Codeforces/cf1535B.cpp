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
        ll n,m,i,j,k,l=0;
        cin>>n;

        vector<ll>x,y;

        for(i=0;i<n;i++)
        {
              cin>>m;

              if(m%2) x.push_back(m);
              else y.push_back(m);
        }

        for(auto r:x)
        {
             y.push_back(r);
        }

        for(i=0;i<n;i++)
        {
             for(j=i+1;j<n;j++)
             {
                  if(__gcd(y[i],2*y[j])>1) l++;
             }
        }
        cout<<l<<endl;
   }

   return 0;
}

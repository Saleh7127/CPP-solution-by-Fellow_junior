#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   map<ll,ll>x;

   ll n,m,i,j,k,l;

   cin>>n;

   ll a[n*n+4];

   for(i=0;i<n*n;i++)
   {
        cin>>a[i];

        x[a[i]]++;
   }

   sort(a,a+n*n);

   vector<ll>y;

   for(i=n*n-1;i>=0;i--)
   {
        if(x[a[i]]>0)
        {
             cout<<a[i]<< " ";

             y.push_back(a[i]);

             for(j=0;j<y.size();j++)
             {
                  k=__gcd(a[i],y[j]);

                  x[k]-=2;
             }

             x[a[i]]--;
        }
   }
   cout<<endl;
   return 0;
}

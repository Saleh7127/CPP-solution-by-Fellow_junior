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
        int n,m,i,j,l,k,ans=0;

        cin>>n;

        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);

        if(a[0]==a[n-1]) cout<<-1<<endl;
        else
        {

             vector<int>x;

             for(i=0;i<n;i++)
             {
                  x.clear();

                  for(j=0;j<n;j++)
                  {
                       x.push_back(a[j]-a[i]);
                  }

                  k=0;

                  for(auto d:x)
                  {
                       k=__gcd(k,d);
                  }

                  ans=max(ans,k);
             }

             cout<<ans<<"\n";
        }
   }

   return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

double a[200],dp[200];

ll n;

double sol(ll pos)
{
     if(pos==n) return a[n];

     if(dp[pos]!=-1) return dp[pos];

     double x=0;

     for(ll i=1;i<=6;i++)
     {
          if(pos+i<=n)
          {
               ll y=min(6ll,n-pos);

               x+=(1.00/y)*sol(pos+i);
          }
     }

     dp[pos]=a[pos]+x;

     return dp[pos];
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        cin>>n;

        ll i,j,k,l;

        for(i=1;i<=n;i++)
        {
             cin>>a[i];
        }

        for(i=0;i<=n+4;i++)
        {
             dp[i]=-1;
        }

        cout<<"Case "<<cs<<": "<<fixed<<setprecision(9)<<sol(1ll)<<endl;
   }


   return 0;
}

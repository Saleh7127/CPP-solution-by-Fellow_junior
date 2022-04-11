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
        ll n,m,i,j,k,l=0;

        cin>>n;

        ll a[n+4];

        ll c[n+4][n+4];

        for(i=1;i<=n;i++) cin>>a[i];

        for(i=0;i<n+2;i++)
        {
             for(j=0;j<n+2;j++)
             {
                  c[i][j]=0;
             }
        }

        for(i=1;i<=n;i++)
        {
             for(j=i+1;j<=n;j++)
             {
                  l+=c[a[i]][a[j]];
             }
             for(j=i-1;j>=1;j--)
             {
                  c[a[j]][a[i]]++;
             }
        }

        cout<<l<<endl;

   }

   return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll a[3][100005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k=0,l=1e17;

        cin>>n;

        for(i=0;i<2;i++)
        {
             for(j=0;j<n;j++)
             {
                  cin>>a[i][j];
             }
        }

        for(i=0;i<n;i++)
        {
             k+=a[0][i];
        }

        j=0;

        for(i=0;i<n;i++)
        {
             k-=a[0][i];
             l=min(l,max(k,j));
             j+=a[1][i];
        }

        cout<<l<<'\n';
   }

   return 0;
}


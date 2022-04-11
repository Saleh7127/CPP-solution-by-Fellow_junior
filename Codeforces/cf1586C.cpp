/***
 created: 2021-10-18-21.43.28
***/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define please_exit return 0

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   cin>>n>>m;

   char a[n+4][m+4];

   for(i=1;i<=n;i++)
   {
        for(j=1;j<=m;j++)
        {
             cin>>a[i][j];
        }
   }

   ll grid[m+4]={0};

   for(i=2;i<=n;i++)
   {
        for(j=2;j<=m;j++)
        {
             if(a[i-1][j]=='X' && a[i][j-1]=='X')
             {
                 grid[j]=1;
             }
        }
   }


   for(i=2;i<=m;i++)
   {
        grid[i]+=grid[i-1];
   }

   ll q;

   cin>>q;

   while(q--)
   {
        cin>>j>>k;

        if(grid[k]-grid[j]) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
   }


   please_exit;
}

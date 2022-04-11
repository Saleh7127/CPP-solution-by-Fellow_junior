/***
 created: 2022-01-15-20.32.00
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k=0,l=-1,r,c;


        cin>>n>>m>>r>>c;


        char a[n+4][m+4];

        for(i=1;i<=n;i++)
        {
             for(j=1;j<=m;j++)
             {

                  cin>>a[i][j];
                  if(a[i][j]=='B')
                  {
                       l=1;
                  }

                  if(i==r && j==c && a[i][j]=='B')
                  {
                       k=1;
                  }
             }
        }


        if(l<0) cout<<l<<nl;
        else if(k) cout<<0<<nl;
        else
        {
             l=0;
             for(i=1;i<=m;i++)
             {
                  if(a[r][i]=='B')
                  {
                       l=1;
                  }
             }
             for(i=1;i<=n;i++)
             {
                  if(a[i][c]=='B')
                  {
                       l=1;
                  }
             }

             if(l) cout<<l<<nl;
             else cout<<2<<nl;
        }

   }


   get_lost_idiot;
}


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {

        ll n,m,i,j,k,l,h,w;

        cin>>n>>m;

        ll a[n+2][m+2];

        memset(a,0,sizeof a);

        for(i=1;i<=n;i++)
        {
             for(j=1;j<=m;j++)
             {
                  if(i==1 || j==1 || i==n || j==m)
                  {
                       if(a[i-1][j]==0 && a[i][j-1]==0 && a[i+1][j]==0 && a[i][j+1]==0 && a[i-1][j-1]==0 && a[i-1][j+1]==0 && a[i+1][j-1]==0 && a[i+1][j+1]==0)
                       {
                            a[i][j]=1;
                       }
                  }
             }
        }

        for(i=1;i<=n;i++)
        {
             for(j=1;j<=m;j++)
             {
                  cout<<a[i][j];
             }
             cout<<endl;
        }

    }

    return 0;
}


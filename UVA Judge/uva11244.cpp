#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a[105][105];
    ll n,m,i,j,k,l;
    while(cin>>n>>m && n && m)
    {
        memset(a,0,sizeof(a));
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                char x;
                cin>>x;
                if(x=='*') a[i][j]=1;
                else a[i][j]=0;
            }
        }
        l=0;
        k=0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(a[i][j]==1)
                {
                    if(a[i+1][j-1]!=1 && a[i+1][j]!=1 && a[i+1][j+1]!=1 &&  a[i][j-1]!=1 &&  a[i][j+1]!=1 &&  a[i-1][j-1]!=1 &&  a[i-1][j]!=1 &&  a[i-1][j+1]!=1)
                    {
                        l++;
                    }
                }
            }
        }
        cout<<l<<endl;
    }


    return 0;
}

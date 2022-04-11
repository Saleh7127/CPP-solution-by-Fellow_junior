#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k,l,a=0,b=5555,c=0,d=1000000,e;

    cin>>n>>m;

    char x[n+4][m+4];

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
             cin>>x[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
             if(x[i][j]=='*')
             {
                  a=max(i,a);
                  b=min(i,b);
                  c=max(j,c);
                  d=min(d,j);
             }
        }
    }


    for(i=b; i<=a; i++)
    {
        for(j=d; j<=c; j++)
        {
             cout<<x[i][j];
        }
        cout<<endl;
    }

    return 0;
}

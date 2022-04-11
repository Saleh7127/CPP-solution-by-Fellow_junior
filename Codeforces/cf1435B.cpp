#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m;
        cin>>n>>m;
        ll a[n*m+5],c[n*m+5],d,e,f,i,j,k,l;

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>d;
                a[d]=j;
            }
        }

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>d;
                c[d]=j;
            }
        }
        int  ans[n+5][m+5];
        for(i=1;i<=n*m;i++)
        {
            ans[c[i]][a[i]]=i;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}

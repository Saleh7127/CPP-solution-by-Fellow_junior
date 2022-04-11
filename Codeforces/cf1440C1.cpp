#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    test
    {
        char x[105][105];
        ll a[105][105];

        ll n,m,i,j,k,l;
        cin>>n>>m;

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>x[i][j];
                a[i][j]=x[i][j]-'0';
            }
        }
        vector<pair<ll,ll> >aa;
        for(i=0; i<n-2; i++)
        {
            for(j=0; j<m-1; j++)
            {
                if(a[i][j])
                {
                    aa.push_back({i,j});
                    aa.push_back({i+1,j});
                    aa.push_back({i,j+1});
                    a[i][j]^=1;
                    a[i+1][j]^=1;
                    a[i][j+1]^=1;
                }
            }
            if(a[i][m-1])
            {
                aa.push_back({i,m-1});
                aa.push_back({i+1,m-1});
                aa.push_back({i+1,m-2});
                a[i][m-1]^=1;
                a[i+1][m-1]^=1;
                a[i+1][m-2]^=1;
            }
        }
        i = n-2;
        for(j=0; j<m-1; j++)
        {
            if(a[i][j]==1 && a[i+1][j]==1)
            {
                aa.push_back({i,j});
                aa.push_back({i,j+1});
                aa.push_back({i+1,j});
                a[i][j] = 0;
                a[i+1][j] = 0;
                a[i][j+1] ^= 1;
            }
            else if(a[i][j]==1)
            {
                aa.push_back({i,j});
                aa.push_back({i,j+1});
                aa.push_back({i+1,j+1});
                a[i][j] = 0;
                a[i][j+1] ^= 1;
                a[i+1][j+1] ^= 1;
            }
            else if(a[i+1][j]==1)
            {
                aa.push_back({i+1,j});
                aa.push_back({i,j+1});
                aa.push_back({i+1,j+1});
                a[i+1][j] = 0;
                a[i][j+1] ^= 1;
                a[i+1][j+1] ^= 1;
            }
        }
        j = m-1;
        if(a[i][j]==1 && a[i+1][j]==1)
        {
            aa.push_back({i,j});
            aa.push_back({i,j-1});
            aa.push_back({i+1,j-1});
            aa.push_back({i+1,j});
            aa.push_back({i,j-1});
            aa.push_back({i+1,j-1});
        }
        else if(a[i][j]==1)
        {
            aa.push_back({i,j});
            aa.push_back({i,j-1});
            aa.push_back({i+1,j});
            aa.push_back({i,j});
            aa.push_back({i+1,j});
            aa.push_back({i+1,j-1});
            aa.push_back({i,j});
            aa.push_back({i,j-1});
            aa.push_back({i+1,j-1});
        }
        else if(a[i+1][j]==1)
        {
            aa.push_back({i+1,j});
            aa.push_back({i,j});
            aa.push_back({i+1,j-1});
            aa.push_back({i+1,j});
            aa.push_back({i,j});
            aa.push_back({i,j-1});
            aa.push_back({i+1,j});
            aa.push_back({i+1,j-1});
            aa.push_back({i,j-1});

        }
        ll b=aa.size();
        cout<<b/3<<endl;
        for(i=0; i<b; i++)
        {
            cout<<aa[i].first+1<<" "<<aa[i].second+1;
            if(i%3==2) cout<<endl;
            else cout<<" ";
        }
    }

    return 0;
}

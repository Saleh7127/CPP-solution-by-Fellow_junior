/***
 created: 2021-11-12-18.47.06
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll cost[505][505];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l,q,cc=0;

    while(cin>>n>>m>>q && n && m && q)
    {
        for(i=0; i<=n; i++)
        {
            for(j=0; j<=n; j++)
            {
                cost[i][j]=1e17;
            }
            cost[i][i]=0ll;
        }


        for(i=0; i<m; i++)
        {
            cin>>j>>k>>l;

            cost[j][k]=min(cost[j][k],l);
            cost[k][j]=min(cost[k][j],l);
        }


        for(k=1; k<=n; k++)
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    cost[i][j]=min(cost[i][j],max(cost[i][k],cost[k][j]));
                }
            }
        }

        if(cc) cout<<nl;

        cout<<"Case #"<<++cc<<nl;

        while(q--)
        {
            cin>>j>>k;

            if(cost[j][k]==1e17) cout<<"no path"<<nl;

            else cout<<cost[j][k]<<nl;
        }

    }

    get_lost_idiot;
}


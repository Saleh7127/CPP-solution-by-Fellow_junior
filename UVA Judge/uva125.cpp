/***
 created: 2021-11-12-23.56.47
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll cost[100][100];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k,l=0;

    while(cin>>m)
    {
        n=0;

        memset(cost,0,sizeof cost);

        while(m--)
        {
            cin>>j>>k;

            cost[j][k]=1;
            n=max({n,j,k});
        }

        for(k=0; k<=n; k++)
        {
            for(i=0; i<=n; i++)
            {
                for(j=0; j<=n; j++)
                {
                    if(cost[i][k] && cost[k][j])
                    {
                        cost[i][j]+=(cost[i][k]*cost[k][j]);
                    }
                }
            }
        }

        for(k=0; k<=n; k++)
        {
            if(cost[k][k])
            {
                for(i=0; i<=n; i++)
                {
                    for(j=0; j<=n; j++)
                    {
                        if(cost[i][k] && cost[k][j])
                        {
                            cost[i][j]=-1;
                        }
                    }
                }
            }
        }

        cout<<"matrix for city "<<l++<<nl;

        for(i=0;i<=n;i++)
        {
             for(j=0;j<=n;j++)
             {
                  if(j) cout<<" "<<cost[i][j];
                  else cout<<cost[i][j];
             }

             cout<<nl;
        }

    }

    get_lost_idiot;
}

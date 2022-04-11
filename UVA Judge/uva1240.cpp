/***
 created: 2022-01-27-19.27.38
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll Set(ll N,ll pos)
{
    return N=N |(1<<pos);
}
ll reset(ll N,ll pos)
{
    return N= N & ~(1<<pos);
}
bool check(ll N,ll pos)
{
    return (bool)(N & (1<<pos));
}
ll n,a[16][16];
ll dp[5][(1<<12)+5][310];

ll solve(ll mask,ll in,ll z)
{
    if(mask==(1<<n)-1) return 0;

    if(dp[in][mask][z]!=-1) return dp[in][mask][z];

    ll ans=0;

    for(ll i=0; i<n; i++)
    {
        if(check(mask,i)==0)
        {
             if(z+a[1][i]<=280 && in!=1)
             {
                  ans=max(ans,1+solve(Set(mask,i),1,z+a[1][i]));
             }
             if(z+a[2][i]<=280 && in!=2)
             {
                  ans=max(ans,1+solve(Set(mask,i),2,z+a[2][i]));
             }
             if(z+a[3][i]<=280 && in!=3)
             {
                  ans=max(ans,1+solve(Set(mask,i),3,z+a[3][i]));
             }
        }
    }

    return dp[in][mask][z]=ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        cin>>n;

        for(ll i=1; i<=3; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }

        memset(dp,-1,sizeof dp);

        cout<<solve(0,0,0)<<nl;
    }


    get_lost_idiot;
}

/*

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll Set(ll N,ll pos)
{
    return N=N |(1<<pos);
}
ll reset(ll N,ll pos)
{
    return N= N & ~(1<<pos);
}
bool check(ll N,ll pos)
{
    return (bool)(N & (1<<pos));
}
ll n,a[16][16];
ll dp[5][(1<<12)+5][310];

ll solve(ll mask,ll in,ll z)
{
    if(mask==(1<<n)-1) return 0;

    if(dp[in][mask][z]!=-1) return dp[in][mask][z];

    ll ans=0;

    for(ll i=0; i<n; i++)
    {
        if(check(mask,i)==0)
        {
            for(ll j=0; j<3; j++)
            {
                if(in==j || z+a[j][i]>280) continue;

                ans=max(ans,1+solve(Set(mask,i),j,z+a[j][i]));

            }
        }
    }

    return dp[in][mask][z]=ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        cin>>n;

        for(ll i=0; i<3; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }

        memset(dp,-1,sizeof dp);

        cout<<solve(0,0,0)<<nl;
    }


    get_lost_idiot;
}

*/

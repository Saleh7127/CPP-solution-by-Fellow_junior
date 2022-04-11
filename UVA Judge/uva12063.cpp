/***
 created: 2021-11-20-22.37.09
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[72][70][110];
ll n,k;

ll solve(ll one,ll zero,ll r)
{
    if((one+zero)==n)
    {
        if(one==zero && r==0) return 1;
        return 0;
    }

    if(dp[one][zero][r]!=-1) return dp[one][zero][r];

    return dp[one][zero][r]=solve(one+1,zero,((r*2)+1)%k)+solve(one,zero+1,(r*2)%k);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    test
    {
        ll i,j,l;

        cin>>n>>k;

        cout<<"Case "<<cs<<": ";

        if(n%2==1 || k==0)
        {
            cout<<0<<nl;
        }
        else
        {
            memset(dp,-1,sizeof dp);

            cout<<solve(1,0,1%k)<<nl;
        }
    }

    get_lost_idiot;
}

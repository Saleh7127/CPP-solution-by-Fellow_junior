/***
 created: 2021-11-23-22.43.31
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[55][55];

ll a[2005];

ll solve(ll i,ll j)
{

    if(j-i<=1) return 0ll;

    ll &ans=dp[i][j];

    if(ans==-1)
    {
        ans=INT_MAX;
        for(ll k=i; k<=j; k++)
        {
            ans=min(ans,solve(i,k)+solve(k,j)+a[j]-a[i]);
        }
    }

    return ans;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,l;

    while(cin>>l && l)
    {
        cin>>n;

        a[0]=0;

        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        a[n+1]=l;

        for(ll i=0; i<=n+2; i++)
        {
            for(ll j=0; j<=n+2; j++)
            {
                dp[i][j]=-1;
            }
        }

        cout<<"The minimum cutting is "<<solve(0,n+1)<<"."<<nl;
    }



    get_lost_idiot;
}

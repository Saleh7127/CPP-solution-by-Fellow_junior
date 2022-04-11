/***
 created: 2021-11-29-01.21.07
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

pair<ll,string>dp[1005][1005];
string a,y;

bool cmp(pair<ll,string>c,pair<ll,string>b)
{
    if(c.first==b.first)
    {
        return c.second<b.second;
    }
    return c.first>b.first;
}

pair<ll,string> solve(ll i,ll j)
{
    if(i>j) return {0,""};

    if(i==j)
    {
        y=a[i];
        return {1,y};
    }

    if(dp[i][j].first!=-1) return dp[i][j];

    pair<ll,string>x,y,z;

    if(a[i]==a[j])
    {
        x = {2+solve(i+1,j-1).first, a[i]+solve(i+1,j-1).second+a[j]};
    }
    else
    {
         y=solve(i,j-1);
         z=solve(i+1,j);

         if(cmp(y,z)) x=y;
         else x=z;
    }

    return dp[i][j]=x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    while(cin>>a)
    {
        for(ll i=0; i<=a.size(); i++)
        {
            for(ll j=0; j<=a.size(); j++)
            {
                dp[i][j].first=-1;
            }
        }

        cout<<solve(0,a.size()-1).second<<nl;
    }


    get_lost_idiot;
}

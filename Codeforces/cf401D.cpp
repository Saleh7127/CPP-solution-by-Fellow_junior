/***
 created: 2022-01-26-15.34.45
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[(1<<18)+4][102];
bool v[(1<<18)+4][102];
ll m,n;
string a;
ll f[19];

ll Set(ll N,ll pos){return N=N |(1<<pos);}
ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
bool check(ll N,ll pos){return (bool)(N & (1<<pos));}

ll solve(ll rem,ll mask)
{
    if(mask==(1<<n)-1) return rem==0;

    if(v[mask][rem]==1) return dp[mask][rem];

    ll ans=0;

    for(ll i=0; i<n; i++)
    {
        if(mask==0 && a[i]=='0') continue;
        if(check(mask,i)==0)
        {
            ans+=solve((rem*10+(a[i]-'0'))%m,Set(mask,i));
            while(a[i]==a[i+1]) i++;
        }
    }

    v[mask][rem]=1;
    return dp[mask][rem]=ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    f[0]=1;

    for(ll i=1; i<=18; i++) f[i]=f[i-1]*i;

    cin>>a>>m;

    n=a.size();

    sort(a.begin(),a.end());

    ll ans=solve(0,0);

    cout<<ans<<endl;

    get_lost_idiot;
}


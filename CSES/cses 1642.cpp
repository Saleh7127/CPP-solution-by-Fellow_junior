#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j;

    map<ll,pair<ll,ll>>x;

    cin>>n>>m;

    ll a[n+4];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(x.find(m-a[i]-a[j])!=x.end())
            {
                cout<<i<<" "<<j<<" "<<x[m-a[i]-a[j]].first<<" "<<x[m-a[i]-a[j]].second<<endl;
                return 0;
            }
        }
        for(j=1; j<i; j++)
        {
            x[a[i]+a[j]]= {i,j};
        }
    }


    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}

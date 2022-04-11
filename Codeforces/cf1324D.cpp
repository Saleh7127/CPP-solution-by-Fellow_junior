#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
ll a[200005],c[200005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll e,f,i,j,k,l;
    cin>>e;
    for(i=0; i<e; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<e; i++)
    {
        cin>>c[i];
    }
    vector < ll > d(e);
    for( i = 0 ; i < e ; i++)
    {
        d[i] = a[i] - c[i];
    }

    sort(d.begin(), d.end());
    vector < ll > ::iterator it;

    ll ans = 0;
    for(i = 0 ; i < e ; i++)
    {
        if(d[i]<= 0) continue;
        it = lower_bound(d.begin(), d.end(), -d[i]+1);
        int f = it-d.begin();
        ans += i-f;
    }
    cout << ans<<endl;
    return 0;
}

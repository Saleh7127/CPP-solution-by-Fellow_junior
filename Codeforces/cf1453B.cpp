#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test

    {

        ll n,a[200005],b,c,d,e=0,f,i,j,k=1,l=0;
        cin>>n;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;
        for(i = 2; i <= n; i++)
        {
            ans += abs(a[i] - a[i - 1]);
        }

        ll mx = max(abs(a[1] - a[2]), abs(a[n] - a[n - 1]));
        for (i = 2; i < n; i++)
        {
            mx = max(mx, abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]) - abs(a[i + 1] - a[i - 1]));

        }
        cout << ans - mx <<endl;
    }


    return 0;
}

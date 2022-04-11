#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    double m, a[10000], b[10000], c = 0, d = 0;
    ll n, i, j, k, l;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    c = b[0] / a[0];

    for (i = 1; i < n; i++)
    {

        c = min(c, b[i] / a[i]);
    }

    for (i = 0; i < n; i++)
    {
        d += (c * a[i]);
    }

    cout << fixed << setprecision(6) << min(d, m) << endl;

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0 ;
}
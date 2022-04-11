#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
double a, b, c, lo, mid, hi;
double valid(double x)
{

    return a * x + b * sin(x);

}

void solve()
{
    cin >> a >> b >> c;

    lo = 0.00, hi = 100000000.00;
    while (hi - lo > 0.0000001)
    {
        mid = (hi + lo) / 2.00;
        if (valid(mid) <= c)
        {
            lo = mid;
        }
        else hi = mid;
    }

    cout << fixed << setprecision(6) << mid << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    test
    {
        solve();
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0 ;
}
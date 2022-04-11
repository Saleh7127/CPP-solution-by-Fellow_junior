#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>a[200005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll n, m, i, j, k = 0, l, c, d, e = 0;

        cin >> n;

        vector<ll>x;
        set<ll>s;


        for (i = 0; i < n + 5; i++)
        {
            a[i].clear();
        }

        for (i = 0; i < n; i++)
        {
            cin >> k;
            s.insert(k);
            x.push_back(k);
        }

        for (i = 0; i < n; i++)
        {
            cin >> k;

            e += k;

            l = x[i];

            a[l].push_back(k);
        }


        for (auto ee : s)
        {
            sort(a[ee].begin(), a[ee].end());
        }

        cout << e << " ";

        m = n + 1;

        for (i = 2; i <= n; i++)
        {
            l = 0;
            d = e;

            for (auto ee : s)
            {
                if (a[ee].size() >= i)
                {
                    l = 1;
                    if (a[ee].size() % i)
                    {
                        c = a[ee].size() % i;
                        for (k = 0; ; k++)
                        {
                            d -= a[ee][k];
                            c--;
                            if (c == 0) break;
                        }
                    }
                }
                else
                {
                    for (k = 0; k < a[ee].size(); k++)
                    {
                        d -= a[ee][k];
                    }
                }

            }
            if (l) cout << d << " ";
            if (l == 0)
            {
                m = i;
                break;
            }
        }

        for (j = m; j <= n; j++)
        {
            cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}

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
        int n, k,i,j;
        cin >> n >> k;
        string a,b;
        cin>>a>>b;

        vector<int> cnt1(26, 0);
        vector<int> cnt2(26, 0);

        for (j = 0; j < n; j++)
        {
            cnt1[a[j] - 'a']++;
        }

        for (j = 0; j < n; j++)
        {
            cnt2[b[j] - 'a']++;
        }

        bool ok = true;

        for (j = 0; j < 25; j++)
        {
            if (cnt1[j] < cnt2[j])
            {
                ok = false;
            }
            else
            {
                int d = cnt1[j] - cnt2[j];
                if (d % k != 0)
                {
                    ok = false;
                }
                else
                {
                    cnt1[j + 1] += d;
                }
            }
        }

        if (ok)
        {
            cout<<"Yes"<<endl;
        }

        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}

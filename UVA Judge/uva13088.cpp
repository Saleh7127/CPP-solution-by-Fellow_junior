#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        string s;
        cin >> s;

        set<char>st;
        for (auto c : s)st.insert(c);

        char c = *st.begin();

        long long l = st.size(), L = s.size();

        string ans;

        for (int i = 0; i < L - l; i++)ans.push_back(c);

        for (auto x : st)ans.push_back(x);

        sort(ans.begin(), ans.end());

        cout << ans << endl;
    }

    return 0;
}

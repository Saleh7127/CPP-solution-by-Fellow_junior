#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll MOD = 1000003;
int main()
{
    string s;
    cin>>s;
    ll res = 0,i,j,k,l;
    for (i = 0; i < s.size(); i++)
    {
        res *= 16;
        if (s[i] == '>')
            res += 8;
        else if (s[i] == '<')
            res += 9;
        else if (s[i] == '+')
            res += 10;
        else if (s[i] == '-')
            res += 11;
        else if (s[i] == '.')
            res += 12;
        else if (s[i] == ',')
            res += 13;
        else if (s[i] == '[')
            res += 14;
        else if (s[i] == ']')
            res += 15;
        res %= MOD;
    }
    cout << res;
    return 0;
}

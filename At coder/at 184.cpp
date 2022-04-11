#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a == c && b == d)
    {
        cout << 0 << endl;
        return 0;
    }
    if(a + b == c + d || a - b == c - d ||abs(a - c) + abs(b - d) <= 3)
    {
        cout << 1 << endl;
        return 0;
    }
    else if((d + c + a - b) % 2 == 0 || (a + b + c - d) % 2 == 0 ||abs(a - c) + abs(b - d) <= 6)
    {
        cout << 2 << endl;
        return 0;
    }
    for(ll i = a -10; i <= a + 10; i++)
    {
        for(ll j = b -10; j <= b + 10; j++)
        {
            ll a2 = a - i;
            ll b2 = b - j;
            if(abs(a - i) + abs(b - j) <= 3)
            {
                if(i + j == c + d || i - j == c - d || abs(i - c) + abs(j - d) <= 3)
                {
                    cout << 2<< endl;
                    return 0;
                }
            }
        }
    }
    cout << 3 << endl;
    return 0;
}

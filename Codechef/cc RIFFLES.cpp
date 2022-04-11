#include <cstring>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <vector>
#include <queue>
using namespace std;
#define N 105
#define met(a, b) memset(a, b, sizeof(a))
#define MOD 110119

typedef long long LL;

int main()
{
    int n;
    int T, t = 1;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);

        double p = 1.0;

        int cnt = n, ans = 0;

        while(1.00-p < 0.5)
        {
            --cnt;
            p = p*cnt/n;
            ans++;
        }
        printf("Case %d: %d\n", t++, ans);
    }
    return 0;
}

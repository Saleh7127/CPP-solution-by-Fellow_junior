#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf(a) printf("%lld",a)
#define loop1(i,a,c) for(i=a;i<=c;i++)
#define loop(i,c) for(i=0;i<c;i++)
int main()
{
    int T;
    cin >> T;
    string a;
    int f;
    getchar();
    for (int t = 1; t <= T; ++t)
    {
        cin >> f >> a;
        double cost = f*0.5;
        if (a.size()>= 4 && a[3]!=' ')
            cost+= (a[3] - '0') * 0.05;
        cout << "Case " << t << ": " << cost << '\n';
    }
    return 0;
}

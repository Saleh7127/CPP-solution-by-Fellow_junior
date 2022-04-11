#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
    ll a,c,d;
    ll i[6][3]= {0,1,2,
                  1,0,2,
                  1,2,0,
                  2,1,0,
                  2,0,1,
                  0,2,1};
    cin>>a>>c;
    printf("%lld\n",i[a%6][c]);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll bigmod(ll a,ll c,ll d)
{
    if(c==0) return 1LL;
    ll x=bigmod(a,c/2,d);
    x=(x*x)%d;
    if(c%2==1LL)
    {
        x=(x*a)%d;
    }
    return x;
}

ll countWays(ll N, ll K)
{
    return K * bigmod(K - 1, N - 1,1000000007) %1000000007;
}

int main()
{

    ll n,m,i,j,k,l=1;

    cin>>n;

    for(i=1;i<=n;i++)
    {
         l*=2;
    }

    l-=1;
    l*=2;

    cout << countWays(l,3)<<endl;
    return 0;
}


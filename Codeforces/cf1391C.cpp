#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod(ll a,ll c,ll mm)
{
    if(c==0) return 1;
    ll x=mod(a,c>>1,mm);
    x=(x*x)%mm;
    if(c&1)
    {
        x=(x*a)%mm;
    }
    return x;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,c,d=1,i,j,k=1e9+7,l;
    cin>>a;
    for(i=2; i<=a; i++)
    {
        d=(d*i)%k;
    }
    cout<<(d+k-mod(2,a-1,k))%k<<endl;
    return 0;
}

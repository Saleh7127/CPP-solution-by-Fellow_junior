#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
ll mod(ll a,ll c,ll d)
{
    if(c==0) return 1;
    ll x=mod(a,c/2,d);
    x=(x*x)%d;
    if(c%2==1)
    {
        x=(x*a)%d;
    }
    return x;
}
int main()
{
    Faster
    ll a,c,d,md;
    while(cin>>a>>c>>d)
    {
        md=mod(a,c,d);
        cout<<md<<endl;
    }
    return 0;
}

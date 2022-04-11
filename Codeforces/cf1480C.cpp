#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll qry(ll x)
{
    cout<<"? "<<x<<endl;
    cin>>x;
    return x;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    ll lo=1,hi=n;
    if(n==1)
    {
        cout<<"! "<<n<<endl;
        return 0;
    }
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;

        if(mid==n || qry(mid)<qry(mid+1))
        {
            hi=mid-1;
        }
        else lo=mid+1;

    }
    cout<<"! "<<lo<<endl;
    return 0;
}

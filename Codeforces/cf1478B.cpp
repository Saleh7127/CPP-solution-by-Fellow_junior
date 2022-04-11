#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool xxx(ll d,ll c)
{
    ll l=0;
    while(d>0)
    {
        ll e=d;
        while(e>0)
        {
            ll f=e%10;
            if(f==c)
            {
                l=1;
                return 1;
            }
            e/=10;
        }
        if(l) return 1;
        else d-=c;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,d,i,j;

        cin>>n>>d;

        ll a[n+5];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }


        for(i=0; i<n; i++)
        {
            j=xxx(a[i],d);
            if(j)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }


    return 0;
}

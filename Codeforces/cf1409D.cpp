#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
ll sd(ll x)
{
    ll r=0;
    while(x)
    {
        r+=x%10;
        x/=10;
    }
    return r;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,s,a=0,c,d,i,j,k,lastd;

        cin>>n>>s;
        if(sd(n)<=s)
        {
            cout<<0<<endl;
            continue;
        }
        c=1;
        for(i=0; i<=18; i++)
        {

            lastd=(n/c)%10;
            d=c*((10-lastd)%10);
            n+=d;
            a+=d;
            if(sd(n)<=s)
            {
                cout<<a<<endl;
                break;
            }
            c*=10;
        }
    }
    return 0;
}

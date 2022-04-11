#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l=0;
        cin>>n>>k;

        set<ll>x;
        for(i=0; i<n; i++)
        {
            cin>>m;
            x.insert(m);
        }
        if(k==0)
        {
            cout<<x.size()<<endl;
            continue;
        }
        ll ma=*(x.rbegin());

        for(auto i:x)
        {
            if(i!=l) break;
            else l++;
        }

        if(l<n)
        {
            ll a=(l+ma+1)/2;
            x.insert(a);
            cout<<x.size()<<endl;
        }
        else cout<<n+k<<endl;
    }


    return 0;
}

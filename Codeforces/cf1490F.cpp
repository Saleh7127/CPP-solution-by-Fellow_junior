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
        ll n,m,i,e=0,f=1e7;
        cin>>n;
        map<ll,ll>x;
        set<ll>dd;

        for(i=0; i<n; i++)
        {
            cin>>m;
            x[m]++;

        }
        for(auto z:x)
        {
            dd.insert(z.second);
        }
        for(auto z:dd)
        {
            e=0;
            for(auto y:x)
            {
                ll r=y.second;
                if(r!=z)
                {
                   if(r>z) e+=(r-z);
                   else e+=r;
                }

            }
            f=min(f,e);
        }

        cout<<f<<endl;
    }

    return 0;
}

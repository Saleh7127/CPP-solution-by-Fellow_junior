#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
vector<ll>g[200005];
ll a[200005],b[200005];
map<ll,ll>x;
set<ll>c;
vector<ll>d;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l,r=0;

        cin>>n>>k;

        x.clear();
        c.clear();
        d.clear();

        for(i=0; i<n+2; i++)
        {
             g[i].clear();
             b[i]=0;
        }

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n; i++)
        {
            x[a[i]]++;
            c.insert(a[i]);
            g[a[i]].push_back(i);
        }

        for(auto rr:c)
        {
            if(x[rr]>=k)
            {
                for(i=1; i<=k; i++)
                {
                    b[g[rr][i-1]]=i;
                }
            }
            else
            {
                for(auto ss:g[rr])
                {
                    d.push_back(ss);
                }
            }
        }

        l=d.size()/k;
        l*=k;
        j=1;

        for(i=0; i<l; i++)
        {
            if(i%k==0) j=1;
            b[d[i]]=j;
            j++;
        }

        for(i=0; i<n; i++) cout<<b[i]<<" ";

        cout<<endl;
    }

    return 0;
}


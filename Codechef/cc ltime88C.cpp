#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool v[200005];

vector<ll>xx[200005];

void check(ll ind)
{
    if(v[ind]==1) return;
    v[ind]=1;

    for(ll i=0; i<xx[ind].size(); i++)
    {
        ll nx=xx[ind][i];
        if(v[nx]==0)
        {
            check(nx);
        }
    }
}

int main()
{
    test
    {
        ll a,c,d,e,n,m,i,j,k=0;
        cin>>n;
        for(i=1; i<n; i++)
        {
            cin>>a>>c;
            xx[a].push_back(c);
            xx[c].push_back(a);
        }

        for(j=1; j<=n; j++)
        {
            if(v[j]==0)
            {
                k++;
                check(j);
            }
        }
        cout<<k<<endl;
    }
}


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>g[200005];
bool v[200005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll a,n,d,e=10000000000,i,j,k,l;
        cin>>n;
        for(i=0;i<=n;i++)
        {
            g[i].clear();
            v[i]=0;
            g[i].push_back(0);
        }

        for(i=1;i<=n;i++)
        {
            cin>>a;
            g[a].push_back(i);
            v[a]=1;
        }
        for(i=0;i<=n;i++)
        {
            g[i].push_back(n+1);
        }

        for(i=0;i<=n;i++)
        {
            if(v[i]!=1) continue;

            l=g[i].size();
            d=0;

            for(j=1;j<l;j++)
            {
                if(g[i][j]-g[i][j-1]>1)
                {
                    d++;
                }
            }

            e=min(d,e);
        }



        cout<<e<<endl;

    }



    return 0;
}

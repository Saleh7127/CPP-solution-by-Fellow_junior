#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>g[100005];
ll visit[100005],c[100005];
ll v,l;
void dfs(ll ind)
{
    visit[ind]=1;
    if(c[ind]==0) v++;
    else l++;
    for(auto i : g[ind])
    {
        if(visit[i]==0)
        {
            c[i]=(c[ind]+1)%2;
            dfs(i);
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,x=0;

        cin>>n;


        memset(visit,0,sizeof(visit));
        memset(c,0,sizeof(c));

        for(i=0; i<n; i++)
        {
            cin>>k>>l;
            g[k].push_back(l);
            g[l].push_back(k);
            x=max(x,max(l,k));
        }
        k=0;
        for(i=1;i<=x;i++)
        {
            v=l=0;
            if(visit[i]==0 && g[i].size()>0)
            {
                c[i]=0;
                dfs(i);
            }
            k+=max(v,l);
        }

        cout<<"Case "<<cs<<": "<<k<<endl;

        for(i=1;i<=x;i++)
        {
            g[i].clear();
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

priority_queue<ll>q;
map<string,ll>mp;
map<ll,string>mp1;
vector<ll>g[100000];
ll a[100000];
vector<string>ans;
bool vv[100000];

void solve()
{
    while(!q.empty())
    {
        ll u=q.top();

         u*=-1;

        q.pop();



        string hh=mp1[u];

        ans.push_back(hh);

        for(ll i=0; i<g[u].size(); i++)
        {
            ll dd=g[u][i];
            a[dd]--;
            if(a[dd]==0)
            {
                q.push(-dd);
            }
        }

    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,cs=1;

    while(cin>>n)
    {


        ll i,j=0,k=0;

        for(i=0; i<50000; i++)
        {
            a[i]=0;
            vv[i]=0;
            g[i].clear();
        }


        ans.clear();

        for(i=1; i<=n; i++)
        {
            string uu;
            cin>>uu;

            mp[uu]=i;
            mp1[i]=uu;
        }

        cin>>m;

        for(i=0; i<m; i++)
        {
            string u,v;

            cin>>u>>v;

            ll x,y;

            x=mp[u];
            y=mp[v];

            g[x].push_back(y);
            a[y]++;

        }

        for(i=1; i<=n; i++)
        {
            if(a[i]==0)
            {
                q.push(-i);
            }
        }

        solve();

        cout<<"Case #"<<cs++<<": Dilbert should drink beverages in this order: ";

        for(i=0;i<ans.size()-1;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<ans[i]<<"."<<endl<<endl;
    }


    return 0;
}

///priority queue with min to max
/*

#include <bits/stdc++.h>
using namespace std;
#define ll long long

priority_queue<ll,vector<ll>,greater<ll>>q;
map<string,ll>mp;
map<ll,string>mp1;
vector<ll>g[100000];
ll a[100000];
vector<string>ans;
bool vv[100000];

void solve()
{
    while(!q.empty())
    {
        ll u=q.top();

        q.pop();

        if(vv[u]) continue;

        string hh=mp1[u];

        ans.push_back(hh);

        vv[u]=1;
        for(ll i=0; i<g[u].size(); i++)
        {
            a[g[u][i]]--;
            if(a[g[u][i]]==0)
            {
                q.push(g[u][i]);
            }
        }

    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,cs=1;

    while(cin>>n)
    {


        ll i,j=0,k=0;

        for(i=0; i<50000; i++)
        {
            a[i]=0;
            vv[i]=0;
            g[i].clear();
        }


        ans.clear();

        for(i=1; i<=n; i++)
        {
            string uu;
            cin>>uu;

            mp[uu]=i;
            mp1[i]=uu;
        }

        cin>>m;

        for(i=0; i<m; i++)
        {
            string u,v;

            cin>>u>>v;

            ll x,y;

            x=mp[u];
            y=mp[v];

            g[x].push_back(y);
            a[y]++;

        }

        for(i=1; i<=n; i++)
        {
            if(a[i]==0)
            {
                q.push(i);
            }
        }

        solve();

        cout<<"Case #"<<cs++<<": Dilbert should drink beverages in this order: ";

        for(i=0;i<ans.size()-1;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<ans[i]<<"."<<endl<<endl;
    }


    return 0;
}
*/

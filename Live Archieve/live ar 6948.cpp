#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

vector<ll>ans;
bool vis[1000];
string x;
ll len;

void backtrack(ll ind)
{

    if(ind>=x.size()) return;

    ll cur=x[ind]-'0';

    if(cur!=0 && vis[cur]==0)
    {
        vis[cur]=1;

        ans.push_back(cur);

        backtrack(ind+1);

        if(ans.size()==len) return;

        ans.pop_back();

        vis[cur]=0;
    }

    if((ind+1) >=x.size()) return;

    cur=cur*10+ (x[ind+1]-'0');

    if(cur!=0 && cur<=len && vis[cur]==0)
    {
        vis[cur]=1;

        ans.push_back(cur);

        backtrack(ind+2);

        if(ans.size()==len)  return;

        ans.pop_back();

        vis[cur]=0;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ///freopen("joke.in", "r", stdin);
    ///freopen("joke.out", "w", stdout);

    ll i;

    cin>>x;

    if( x.size()<10)
    {
        len= x.size();
    }
    else
    {
        len=9+(x.size()-9)/2;
    }
    memset(vis,0,sizeof(vis));

    backtrack(0);

    for(i=0; i<ans.size(); i++)
    {
        if(i==0) cout<<ans[i];
        else cout<<" "<<ans[i];
    }
    cout<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200005];
vector<pair<ll,ll>> tree(600005);
ll ans;
void treeconstruct(ll node,ll b,ll e)
{
    if(b>e) return;
    if(b==e)
    {
        tree[node]= {a[b],a[b]};
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);

    tree[node].first=min(tree[left].first,tree[right].first);
    tree[node].second=max(tree[left].second,tree[right].second);

}

void queries(ll node,ll b,ll e,ll i,ll j,ll cc)
{
    if(ans!=-1) return;

    if(i>e || j<b) return;

    if(b>=i && e<=j)
    {
        pair<ll,ll>c=tree[node];

        if(c.first==cc && c.second==cc) return;

        if(b==e)
        {
            ans=b;
            return;
        }
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    queries(left,b,mid,i,j,cc);

    queries(right,mid+1,e,i,j,cc);

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll q,n,m,i,j,k,l;

    cin>>n>>q;

    for(i=1; i<=n; i++) cin>>a[i];

    treeconstruct(1ll,1ll,n);

    while(q--)
    {
        cin>>j>>k>>m;

        ans=-1;

        queries(1,1,n,j,k,m);

        cout<<ans<<endl;
    }

    return 0;
}

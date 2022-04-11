#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[100005];
pair<ll,ll>tree[400005];

pair<ll,ll> make(pair<ll,ll>a,pair<ll,ll>b)
{
     if(a.first<b.first) return a;
     else if(a.first>b.first) return b;
     else
     {
          pair<ll,ll>x;
          x.first=a.first;
          x.second=a.second+b.second;
          return x;
     }
}

void treeconstruct(ll node,ll b,ll e)
{

    if(b==e)
    {
        tree[node]={a[b],1};
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);

    tree[node]=make(tree[left],tree[right]);

}

pair<ll,ll> queries(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return {10000000000,0ll};

    if(b>=i && e<=j) return tree[node];

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    pair<ll,ll>x=queries(left,b,mid,i,j);

    pair<ll,ll>y=queries(right,mid+1,e,i,j);

    return make(x,y);
}

void update(ll node,ll b,ll e,ll i,ll newv)
{
    if(i>e || i<b) return;

    if(b>=i && e<=i)
    {
        tree[node]={newv,1};
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    update(left,b,mid,i,newv);

    update(right,mid+1,e,i,newv);

    tree[node]=make(tree[left],tree[right]);

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
        cin>>k;

        if(k==1)
        {
            cin>>j>>l;
            j++;
            update(1ll,1ll,n,j,l);
        }
        else if(k==2)
        {
            cin>>j>>l;
            j++;
            pair<ll,ll> ans=queries(1ll,1ll,n,j,l);

            cout<<ans.first<<" "<<ans.second<<endl;
        }
    }

    return 0;
}


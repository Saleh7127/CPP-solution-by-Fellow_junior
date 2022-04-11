#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200005];
ll tree[600005];
ll lazy[600005];

void push_down(ll node,ll b,ll e)
{
    if(lazy[node])
    {
        if(b!=e)
        {
            lazy[node*2]=!lazy[node*2];
            lazy[node*2 + 1]=!lazy[node*2 +1];
        }
        tree[node]=(e-b+1)-tree[node];
        lazy[node]=0;
    }
}

void update(ll node,ll b,ll e,ll i,ll j)
{
    push_down(node,b,e);
    if(i>e || j<b) return;
    if(b>=i && e<=j)
    {
        lazy[node]=!lazy[node];
        push_down(node,b,e);
        return;
    }
    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;
    update(left,b,mid,i,j);
    update(right,mid+1,e,i,j);
    tree[node]=(tree[left]+tree[right]);
}

ll queries(ll node,ll b,ll e,ll i,ll j)
{
    push_down(node,b,e);
    if(i>e || j<b) return 0;
    if(b>=i && e<=j) return tree[node];
    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;
    ll x=queries(left,b,mid,i,j);
    ll y=queries(right,mid+1,e,i,j);
    return (x+y);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll q,n,m,i,j,k,l;
    char c;

    scanf("%lld %lld",&n,&m);

    while(m--)
    {
        scanf("%lld %lld %lld",&j,&k,&l);


        if(j)
        {
            cout<<queries(1,1,n,k,l)<<endl;
        }
        else
        {
            update(1,1,n,k,l);
        }
    }


    return 0;
}


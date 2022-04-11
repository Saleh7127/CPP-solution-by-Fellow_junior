#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[10005];
ll tree[40005];
ll lazy[40005];

void push_down(ll node,ll b,ll e)
{
    if(b!=e)
    {
        lazy[node*2]*=lazy[node];
        lazy[node*2 + 1]*=lazy[node];
    }
    tree[node]*=lazy[node];
    lazy[node]=1ll;
}

void treeconstruct(ll node,ll b,ll e)
{
    lazy[node]=1ll;
    if(b==e)
    {
        tree[node]=a[b];
        lazy[node]=1ll;
        return;
    }
    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;
    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);
    tree[node]=__gcd(tree[left],tree[right]);
}

void update(ll node,ll b,ll e,ll i,ll j,ll newv)
{
    push_down(node,b,e);
    if(i>e || j<b) return;
    if(b>=i && e<=j)
    {
        lazy[node]*=newv;
        push_down(node,b,e);
        return;
    }
    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;
    update(left,b,mid,i,j,newv);
    update(right,mid+1,e,i,j,newv);
    tree[node]=__gcd(tree[left],tree[right]);
}

ll queries(ll node,ll b,ll e,ll i,ll j)
{
    push_down(node,b,e);
    if(i>e || j<b) return 0ll;
    if(b>=i && e<=j) return tree[node];
    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;
    ll x=queries(left,b,mid,i,j);
    ll y=queries(right,mid+1,e,i,j);
    return __gcd(x,y);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll q,n,m,i,j,k,l;

        cin>>n>>m;

        /*
        for(i=0; i<=4*n; i++)
        {
            tree[i]=0ll;
            lazy[i]=1ll;
        }
        */
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        treeconstruct(1ll,1ll,n);

        while(m--)
        {
            cin>>q;
            if(q==1ll)
            {
                cin>>j>>k;
                j++,k++;
                cout<<queries(1ll,1ll,n,j,k)<<endl;
            }
            else
            {
                cin>>j>>k>>l;
                j++,k++;
                update(1ll,1ll,n,j,k,l);
            }
        }
    }

    return 0;
}

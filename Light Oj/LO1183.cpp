/***
 created: 2021-11-16-01.14.59
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll tree[400005];
ll lazy[400005];

void push_down(ll node,ll b,ll e)
{
    if(lazy[node]==-1) return;

    tree[node]=(e-b+1)*lazy[node];

    if(b!=e)
    {
        lazy[node*2]=lazy[node];
        lazy[node*2 + 1]=lazy[node];
    }
    lazy[node]=-1;
}

void treeconstruct(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=0;
        return;
    }
    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;
    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);
    tree[node]=0;
    lazy[node]=(tree[left]+tree[right]);
}

void update(ll node,ll b,ll e,ll i,ll j,ll newv)
{
    push_down(node,b,e);

    if(i>e || j<b) return;
    if(b>=i && e<=j)
    {
        lazy[node]=newv;
        tree[node]=(e-b+1)*newv;
        push_down(node,b,e);
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;

    update(left,b,mid,i,j,newv);
    update(right,mid+1,e,i,j,newv);
    tree[node]=(tree[left]+tree[right]);
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
    return (x+y);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll q,n,m,i,j,k,l,x,y;

        cin>>n>>q;

        memset(tree,0,sizeof tree);
        memset(lazy,-1,sizeof lazy);

        treeconstruct(1ll,1ll,n);

        cout<<"Case "<<cs<<":"<<nl;

        while(q--)
        {
             cin>>m>>i>>j;

             i++,j++;

             if(m==1)
             {
                  cin>>k;
                  update(1,1,n,i,j,k);
             }
             else
             {
                  l=queries(1,1,n,i,j);
                  y=(j-i+1);
                  x=__gcd(l,y);

                  if(l%y) cout<<l/x<<"/"<<y/x<<nl;
                  else cout<<l/y<<nl;
             }
        }

    }

    return 0;
}


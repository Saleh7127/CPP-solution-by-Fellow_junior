#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[100005];
ll tree[400005];

void treeconstruct(ll node,ll b,ll e)
{

    if(b==e)
    {
        tree[node]=a[b];
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);

    tree[node]=tree[left]+tree[right];

}

void update(ll node,ll b,ll e,ll i,ll newv)
{
    if(i>e || i<b) return;

    if(b==e)
    {
        tree[node]=tree[node]-a[i]+newv;
        a[i]=newv;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    update(left,b,mid,i,newv);

    update(right,mid+1,e,i,newv);

    tree[node]=tree[left]+tree[right];

}

ll queries(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return 0;

    if(b>=i && e<=j) return tree[node];


    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    ll x=queries(left,b,mid,i,j);

    ll y=queries(right,mid+1,e,i,j);

    return x+y;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll q,n,m,i,j,k,l;

    cin>>n;

    for(i=1; i<=n; i++)
    {
         cin>>m;
         a[i]=m%2;
    }

    cin>>q;

    treeconstruct(1ll,1ll,n);

    while(q--)
    {
        cin>>k>>j>>l;

        if(k==0)
        {
            update(1ll,1ll,n,j,l%2);
        }
        else if(k==1)
        {
            m=l-j+1-queries(1ll,1ll,n,j,l);
            cout<<m<<endl;

        }
        else if(k==2)
        {
            m=queries(1ll,1ll,n,j,l);
            cout<<m<<endl;
        }

    }



    return 0;
}



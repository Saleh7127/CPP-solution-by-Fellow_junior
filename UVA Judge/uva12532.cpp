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

    tree[node]=tree[left]*tree[right];

}

void update(ll node,ll b,ll e,ll i,ll newv)
{
    if(i>e || i<b) return;

    if(b==e)
    {
        tree[node]=newv;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    update(left,b,mid,i,newv);

    update(right,mid+1,e,i,newv);

    tree[node]=tree[left]*tree[right];

}

ll queries(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return 1;

    if(b>=i && e<=j) return tree[node];


    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    ll x=queries(left,b,mid,i,j);

    ll y=queries(right,mid+1,e,i,j);

    return x*y;

}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,q;

    while(cin>>n>>q)
    {
        ll m,i,j,k,l;

        char c;

        for(i=1; i<=n; i++)
        {
            cin>>m;
            if(m<0) a[i]=-1;
            else if(m==0) a[i]=0;
            else a[i]=1;
        }

        treeconstruct(1ll,1ll,n);

        while(q--)
        {
            cin>>c>>j>>l;

            if(c=='C')
            {
                if(l<0) l=-1;
                else if(l==0) l=0;
                else l=1;

                update(1ll,1ll,n,j,l);
            }
            else if(c=='P')
            {
                m=queries(1ll,1ll,n,j,l);

                if(m==0) cout<<"0";
                else if(m<0) cout<<"-";
                else cout<<"+";
            }
        }
        cout<<endl;

    }

    return 0;
}



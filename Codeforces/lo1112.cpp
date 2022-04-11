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

void update(ll node,ll b,ll e,ll i,ll newv,ll con)
{
    if(i>e || i<b) return;

    if(b>=i && e<=i)
    {
        if(con==1) tree[node]=newv;
        else tree[node]+=newv;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    update(left,b,mid,i,newv,con);

    update(right,mid+1,e,i,newv,con);

    tree[node]=tree[left]+tree[right];

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll q,n,m,i,j,k,l;

        cin>>n>>q;

        for(i=1; i<=n; i++) cin>>a[i];

        cout<<"Case "<<cs<<":"<<endl;

        treeconstruct(1ll,1ll,n);

        while(q--)
        {
            cin>>k;

            if(k==1)
            {
                cin>>l;
                l++;

                m=queries(1ll,1ll,n,l,l);
                cout<<m<<endl;

                update(1ll,1ll,n,l,0ll,1ll);
            }
            else if(k==2)
            {
                cin>>j>>l;
                j++;
                update(1ll,1ll,n,j,l,2ll);
            }
            else if(k==3)
            {
                cin>>k>>l;
                k++,l++;

                m=queries(1ll,1ll,n,k,l);
                cout<<m<<endl;
            }

        }

    }

    return 0;
}


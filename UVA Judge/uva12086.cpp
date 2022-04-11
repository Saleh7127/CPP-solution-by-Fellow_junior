#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200005];
ll tree[800005];

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
        tree[node]=newv;
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


    ll n,q,ff=0;

    while(cin>>n)
    {
        ll m,i,j,k,l;

        if(n==0) break;


        if(ff) cout<<endl;
        ff++;

        //memset(tree,0,sizeof tree);

        for(i=1; i<=n; i++)
        {
           cin>>a[i];
        }

        treeconstruct(1ll,1ll,n);

        cout<<"Case "<<ff<<":"<<endl;

        string c;
        while(cin>>c)
        {
            if(c=="END") break;

            else if(c[0]=='S')
            {
                cin>>j>>k;

                update(1ll,1ll,n,j,k);
            }
            else if(c[0]=='M')
            {
                 cin>>j>>k;
                 m=queries(1ll,1ll,n,j,k);
                 cout<<m<<endl;
            }
        }

    }

    return 0;
}


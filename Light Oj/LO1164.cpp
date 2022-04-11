#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

struct tr{

   ll sum=0,prop=0;

}tree[402505];
ll a[402005];
///tr tree[400505];

void treeconstruct(ll node,ll b,ll e)
{

    if(b==e)
    {
        tree[node].sum=a[b];
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1ll,e);

    tree[node].sum=tree[left].sum+tree[right].sum;

}

ll queries(ll node,ll b,ll e,ll i,ll j,ll s)
{
    if(i>e || j<b) return 0ll;

    if(b>=i && e<=j)
    {
         return tree[node].sum+(e-b+1ll)*s;
    }


    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    ll x=queries(left,b,mid,i,j,s+tree[node].prop);

    ll y=queries(right,mid+1ll,e,i,j,s+tree[node].prop);

    return x+y;

}

void update(ll node,ll b,ll e,ll i,ll j,ll newv)
{
    if(i>e || j<b) return;

    if(b>=i && e<=j)
    {
        ll w=(e-b+1ll);

        tree[node].sum+=(w*newv);
        tree[node].prop+=newv;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    update(left,b,mid,i,j,newv);

    update(right,mid+1ll,e,i,j,newv);

    tree[node].sum=tree[left].sum + tree[right].sum + (e-b+1)*tree[node].prop;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll q,n,m,i,j,k,l,u;

        cin>>n>>q;

        cout<<"Case "<<cs<<":"<<endl;
        for(i=0; i<=4*n; i++)
        {
             a[i]=tree[i].sum=tree[i].prop=0ll;
        }

        treeconstruct(1ll,1ll,n);

        while(q--)
        {
            cin>>u;

            if(u==0ll)
            {
                cin>>j>>k>>l;
                j++,k++;
                update(1ll,1ll,n,j,k,l);
            }
            else if(u==1ll)
            {
                cin>>j>>l;
                j++,l++;
                m=queries(1ll,1ll,n,j,l,0ll);
                cout<<m<<endl;
            }
        }

    }

    return 0;
}


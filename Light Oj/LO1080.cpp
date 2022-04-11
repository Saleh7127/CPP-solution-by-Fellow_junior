#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
struct fun
{
    ll s=0,p=0;

} tree[402006];
char a[102005];

void treeconstruct(ll node,ll b,ll e)
{

    if(b==e)
    {
        tree[node].s=a[b]-'0';
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);

    tree[node].s=tree[left].s+tree[right].s;

}

void update(ll node,ll b,ll e,ll i,ll j)
{

    if(i>e || j<b) return;

    if(b>=i && e<=j)
    {
        tree[node].s+=(e-b+1);
        tree[node].p+=1;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    update(left,b,mid,i,j);

    update(right,mid+1,e,i,j);

    tree[node].s = tree[left].s + tree[right].s + tree[node].p* (e-b)+1;
}

ll queries(ll node,ll b,ll e,ll i,ll c)
{
    if(i>e || i<b) return 0ll;

    if(b>=i && e<=i)
    {
        return tree[node].s+c*(e-b+1);
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    ll x=queries(left,b,mid,i,c+tree[node].p);

    ll y=queries(right,mid+1,e,i,c+tree[node].p);

    return x+y;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll q,n,m,i,j,k,l;

        cin>>a;
        cin>>q;

        n=strlen(a)-1;

        memset(tree,0ll,sizeof tree);

        treeconstruct(1ll,0ll,n);

        cout<<"Case "<<cs<<":"<<endl;

        while(q--)
        {
            char ch;

            cin>>ch;

            if(ch=='I')
            {
                cin>>j>>l;
                j--,l--;
                update(1ll,0ll,n,j,l);
            }

            else if(ch=='Q')
            {
                cin>>j;
                j--;
                m=queries(1ll,0ll,n,j,0ll);

                cout<<m%2<<endl;
            }
        }

    }

    return 0;
}

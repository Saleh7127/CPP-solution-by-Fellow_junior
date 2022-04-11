#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
struct fun
{

    ll la=0,z=0,o=0,t=0;

} tree[402006];
ll a[402005];

void swapp(ll node)
{
    ll tmp=tree[node].z;
    tree[node].z=tree[node].t;
    tree[node].t=tree[node].o;
    tree[node].o=tmp;
}

void treeconstruct(ll node,ll b,ll e)
{

    if(b==e)
    {
        tree[node].z+=1ll;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);

    tree[node].z=tree[left].z+tree[right].z;

}

ll queries(ll node,ll b,ll e,ll i,ll j,ll c)
{
    if(i>e || j<b) return 0ll;

    if(b>=i && e<=j)
    {
        if(c==0) return tree[node].z;
        else if(c==1) return tree[node].t;
        else return tree[node].o;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    ll x=queries(left,b,mid,i,j,(c+tree[node].la)%3);

    ll y=queries(right,mid+1,e,i,j,(c+tree[node].la)%3);

    return x+y;

}

void update(ll node,ll b,ll e,ll i,ll j)
{

    if(i>e || j<b) return;

    if(b>=i && e<=j)
    {
        swapp(node);
        tree[node].la++;
        tree[node].la%=3;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    update(left,b,mid,i,j);

    update(right,mid+1,e,i,j);

    tree[node].z=tree[left].z+tree[right].z;
    tree[node].o=tree[left].o+tree[right].o;
    tree[node].t=tree[left].t+tree[right].t;

    ll xx=tree[node].la;

    if(xx)
    {
        while(xx--)
        {
            swapp(node);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        cout<<"Case "<<cs<<":"<<endl;
        ll q,n,m,i,j,k,l;

        cin>>n>>q;

        for(i=0; i<4*n; i++)
        {
            tree[i].la=tree[i].o=tree[i].t=tree[i].z=a[i]=0;
        }


        treeconstruct(1ll,1ll,n);

        while(q--)
        {
            cin>>k>>j>>l;

            if(k==0ll)
            {
                j++,l++;
                update(1ll,1ll,n,j,l);
            }
            else if(k==1ll)
            {
                j++,l++;
                m=queries(1ll,1ll,n,j,l,0ll);
                cout<<m<<endl;
            }
        }


    }

    return 0;
}
/*
4 7
1 0 3
0 1 2
0 1 3
1 0 0
0 0 3
1 3 3
1 0 3
*/

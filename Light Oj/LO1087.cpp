/***
 created: 2021-10-24-14.33.35
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define siz 200005
ll a[200005],f[siz];
ll tree[800005];

void treeconstruct(ll node,ll b,ll e)
{

    if(b==e)
    {
        if(a[b]) tree[node]=1;
        else tree[node]=0;
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


    test
    {
        ll n,m,i,j,k,l,q;
        char ch;

        cin>>n>>q;

        k=n;

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        treeconstruct(1,1,k*2);

        cout<<"Case "<<cs<<":"<<endl;

        while(q--)
        {
            cin>>ch>>m;

            if(ch=='a')
            {
                n++;
                a[n]=m;
                update(1,1,k*2,n,1);
            }
            else
            {
                ll lo=1,hi=n,mid,ans=0;

                while(lo<=hi)
                {
                    mid=(lo+hi)/2;

                    if(queries(1,1,k*2,1,mid)>=m)
                    {
                        ans=mid;
                        hi=mid-1;
                    }
                    else lo=mid+1;
                }

                if(ans)
                {
                    cout<<a[ans]<<"\n";
                    update(1,1,k*2,ans,0ll);
                }
                else cout<<"none"<<"\n";
            }
        }
    }


    get_lost_idiot;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200005];
ll tree[800005];
void treeconstruct(ll node,ll b,ll e,ll ind)
{

    if(b==e)
    {
        tree[node]=a[b];
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid,ind+1);
    treeconstruct(right,mid+1,e,ind+1);

    if(ind%2) tree[node]= tree[left] | tree[right];
    else tree[node]= tree[left] ^ tree[right];

}

void update(ll node,ll b,ll e,ll i,ll newv,ll ind)
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

    update(left,b,mid,i,newv,ind+1);

    update(right,mid+1,e,i,newv,ind+1);

    if(ind%2) tree[node]=tree[left] | tree[right];
    else tree[node]=tree[left] ^ tree[right];

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l=0,q;

    cin>>n>>q;

    for(i=1;i<=(1<<n);i++)
    {
         cin>>a[i];
    }

    if(n%2) l=1;

    treeconstruct(1,1,(1<<n),l);

    while(q--)
    {
         cin>>j>>k;

         update(1,1,(1<<n),j,k,l);

         cout<<tree[1]<<endl;
    }


    return 0;
}

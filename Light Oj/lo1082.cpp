#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[100005];
ll tree[400005];

void treeconstruct(ll node,ll b,ll e)
{
     if(b>=e)
     {
          if(b==e) tree[node]=a[b];
          return;
     }

     ll left = node*2;
     ll right = node*2 + 1ll;

     ll mid=(b+e)/2;

     treeconstruct(left,b,mid);
     treeconstruct(right,mid+1,e);

     tree[node]=min(tree[left],tree[right]);

}

ll queries(ll node,ll b,ll e,ll i,ll j)
{
     if(i>e || j<b) return INT_MAX;

     if(b>=i && e<=j) return tree[node];
     //if(b>e) return INT_MAX;

     ll left = node*2;
     ll right = node*2 + 1ll;

     ll mid=(b+e)/2;

     ll x=queries(left,b,mid,i,j);

     ll y=queries(right,mid+1,e,i,j);

     return min(x,y);

}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll q,n,m,i,j,k,l;

        cin>>n>>q;

        for(i=1;i<=n;i++) cin>>a[i];

        cout<<"Case "<<cs<<":"<<endl;

        treeconstruct(1ll,1ll,n);

        while(q--)
        {
             cin>>k>>l;

             m=queries(1ll,1ll,n,k,l);

             cout<<m<<endl;
        }

   }

   return 0;
}

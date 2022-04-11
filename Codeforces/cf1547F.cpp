/***
 created: 2022-02-06-20.16.59
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll a[400005];
ll tree[1600010];
ll n;
void treeconstruct(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=a[b];
        return;
    }
    ll left = node*2;
    ll right = left|1ll;
    ll mid=(b+e)/2;
    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);
    tree[node]=__gcd(tree[left],tree[right]);
}

ll queries(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return 0;
    if(b>=i && e<=j) return tree[node];
    ll left = node*2;
    ll right = left|1ll;
    ll mid=(b+e)/2;
    ll x=queries(left,b,mid,i,j);
    ll y=queries(right,mid+1,e,i,j);
    return __gcd(x,y);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll m,i,j,k,l,h;

        cin>>n;

        for(i=0;i<n;i++)
        {
             cin>>a[i];
             a[n+i]=a[i];
        }

        k=2*n-1;

        for(i=0;i<k*4;i++) tree[i]=0;

        treeconstruct(1,0,2*n-1);

        l=0,h=n-1;

        while(l<=h)
        {
            ll mid=(l+h)/2;

            j=queries(1,0,2*n-1,0,mid);

            ll f=0;

            for(i=1;i<n;i++)
            {
                 if(j!=queries(1,0,2*n-1,i,i+mid))
                 {
                      f=1;
                      break;
                 }
            }

            if(!f) h=mid-1;
            else
            {
                 l=mid+1;
            }
        }

        cout<<l<<nl;
   }



   get_lost_idiot;
}


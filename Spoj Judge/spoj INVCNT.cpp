/***
 created: 2022-02-17-21.40.43
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll x[200008],y[200005],a[200005];
ll ans=0;
void merge_array(ll l,ll mid,ll mid1,ll h)
{

    for(ll i=l; i<=mid; i++) x[i]=a[i];
    for(ll i=mid1; i<=h; i++) y[i]=a[i];

    ll ls=l,rs=mid1;

    for(ll i=l; i<=h; i++)
    {
        if(ls>mid)
        {
            a[i]=y[rs];
            rs++;
        }
        else if(rs>h)
        {
            a[i]=x[ls];
            ls++;
        }
        else
        {
            if(x[ls]<y[rs])
            {
                a[i]=x[ls];
                ls++;
            }
            else
            {
                a[i]=y[rs];
                rs++;
                ans+=(mid-ls+1);
            }
        }
    }

}

void merge_sort(ll l,ll h)
{
    if(l<h)
    {
        ll mid=(l+h)/2;

        merge_sort(l,mid);
        merge_sort(mid+1,h);

        merge_array(l,mid,mid+1,h);
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l;

        cin>>n;

      //  ll a[n+4];

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        merge_sort(1,n);

        cout<<ans<<nl;

        ans=0;
    }

    get_lost_idiot;
}


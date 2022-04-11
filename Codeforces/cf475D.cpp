#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
///length of array = n ;

ll a[100005];
ll stgcd[100005][18];
ll logg2[100005];

void logg()
{
    logg2[1]=0;

    for(ll i=2; i<=100002; i++)
    {
        logg2[i]=logg2[i/2]+1;
    }
}


void sparsetable(ll n)
{
    ll i,j,x,y;

    for(i=1; i<=logg2[n]; i++)
    {
        for(j=0; j+(1<<i)<=n; j++)
        {
            x=stgcd[j][i-1];
            y=stgcd[j+(1<<(i-1))][i-1];

            stgcd[j][i]= __gcd(x,y);
        }
    }
}


ll qgcd(ll l,ll r)
{
    ll k,x,y;

    k=logg2[r-l+1];

    x=stgcd[l][k];
    y=stgcd[r-(1<<k)+1][k];

    return __gcd(x,y);
}

ll bsearch(ll gcdd,ll lim)
{
    ll l,h,mid,ans;

    l=0;
    h=lim;

    while(l<=h)
    {
        mid=(l+h)/2;

        if( qgcd(mid,lim)>=gcdd)
        {
            ans=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    logg();

    ll n,i,j,k,q,x,y,z;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        stgcd[i][0]=a[i];
    }

    sparsetable(n);

    map<ll,ll>ans;

    for(i=0; i<n; i++)
    {
        j=i;
        while(j>=0)
        {
            x=qgcd(j,i);
            y=bsearch(x,i);
            ans[x]+=(j-y+1);
            j=y-1;
        }
    }

    cin>>q;

    while(q--)
    {
        cin>>x;
        cout<<ans[x]<<endl;
    }

    return 0;
}


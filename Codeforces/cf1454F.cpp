#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
///length of array = n ;

ll a[200005];
ll stmax[200005][18];
ll stmin[200005][18];
ll logg2[200005];

void logg()
{
    logg2[1]=0;

    for(ll i=2; i<=200005; i++)
    {
        logg2[i]=logg2[i/2]+1;
    }
}


void sparsetable(ll n)
{
    ll i,j,x,y,u,v;

    for(i=1; i<=logg2[n]; i++)
    {
        for(j=0; j+(1<<i)<=n; j++)
        {
            x=stmax[j][i-1];
            y=stmax[j+(1<<i-1)][i-1];

            u=stmin[j][i-1];
            v=stmin[j+(1<<i-1)][i-1];

            stmax[j][i]=max(x,y);
            stmin[j][i]=min(u,v);
        }
    }
}


ll qmax(ll l,ll r)
{
    ll k=logg2[r-l+1];

    ll x=stmax[l][k];
    ll y=stmax[r-(1<<k)+1][k];

    return max(x,y);
}

ll qmin(ll l,ll r)
{
    ll k=logg2[r-l+1];

    ll x=stmin[l][k];
    ll y=stmin[r-(1<<k)+1][k];

    return min(x,y);
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    logg();


    test
    {
        ll n,i,j,k,l,h,mid,q,ans=0,x,y,z;

        cin>>n;

        for(i=0; i<n; i++)
        {
             cin>>a[i];
             stmax[i][0]=stmin[i][0]=a[i];
        }

        sparsetable(n);

        for(i=0;i<n-2;i++)
        {
             x=qmax(0ll,i);

             if(x>a[i+1]) continue;

             l=i+1,h=n-2;

             while(l<=h)
             {
                  mid=(l+h)/2;

                  y=qmin(i+1,mid);
                  z=qmax(mid+1,n-1);

                  if(y>x) l=mid+1;

                  else if(y<x) h=mid-1;

                  else if(z>x) l=mid+1;

                  else if(z<x) h=mid-1;

                  else
                  {
                       cout<<"YES"<<endl;
                       cout<<i+1<<" "<<mid-i<<" "<<n-mid-1<<endl;
                       ans=1;
                       break;
                  }
             }

             if(ans) break;
        }

        if(ans==0) cout<<"NO"<<endl;
    }

    return 0;
}

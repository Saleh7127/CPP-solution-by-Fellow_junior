/***
 created: 2022-02-05-22.50.30
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l,h;

        cin>>n>>k;

        ll a[n+4];
        map<ll,ll>f;

        ll p[n+4]={0};


        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            f[a[i]]++;
        }

        for(i=1; i<=n; i++)
        {
            p[i]=p[i-1]+f[i];
        }
        l=0,h=n;

        while(h>l+1)
        {
            ll mid=(l+h)/2;
            j=0;
            for(i=1; i<=n-mid+1; i++)
            {
                ll in=p[i+mid-1]-p[i-1];
                ll out=n-in;
                if(in-out>=k)
                {
                    j=1;
                    break;
                }
            }
            if(j) h=mid;
            else l=mid;

        }

        for(i=1; i<=n-h+1; i++)
        {
            ll in=p[i+h-1]-p[i-1];
            ll out=n-in;
            if(in-out>=k)
            {
                l=i;
                j=i+h-1;
            }
        }

        cout<<l<<" "<<j<<nl;

        memset(p,0,sizeof p);

        for(i=1; i<=n; i++)
        {
            p[i]=p[i-1];
            if(a[i]>=l && a[i]<=j) p[i]+=1;
            else p[i]-=1;
        }

        l=j=1;

        for(i=1; i<=k-1; i++)
        {
            while(p[j]!=i) j++;
            cout<<l<<" "<<j<<nl;
            l=j+1;
        }
        cout<<l<<" "<<n<<nl;
    }



    get_lost_idiot;
}

/***
 created: 2022-01-10-21.13.25
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
        ll n,m,i,j,k,l=0;

        cin>>n;

        ll a[n+4];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        map<ll,ll>x;

        for(i=0; i<n; i++)
        {

            if(x[a[i]]==0 && a[i]<=n) x[a[i]]++;
            else
            {
                j=0;
                while(a[i]>0)
                {
                    a[i]/=2;

                    if(a[i]<=n && x[a[i]]==0)
                    {
                        x[a[i]]++;
                        j=1;
                        break;
                    }
                }

                if(j==0)
                {
                    l=1;
                    break;
                }
            }

        }

        for(i=1; i<=n; i++)
        {
            if(x[i]==0 || x[i]>1)
            {
                l=1;
                break;
            }
        }

        if(l) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }



    get_lost_idiot;
}


/***
 created: 2022-02-07-22.39.20
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll a[200005],qq[200005],l[200005],r[200005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k,q;

    cin>>n>>q>>m;

    for(i=1; i<=n; i++) cin>>a[i];

    for(i=1; i<=q; i++)
    {
        cin>>qq[i]>>l[i]>>r[i];
    }

    while(m--)
    {
        cin>>k;

        for(i=q; i>=1; i--)
        {
            if(k>=l[i] && k<=r[i])
            {
                if(qq[i]==1)
                {
                    if(k==l[i]) k=r[i];
                    else k--;
                }
                else
                {
                    k=r[i]-k+l[i];
                }
            }
        }

        cout<<a[k]<<" ";
    }
    cout<<nl;


    get_lost_idiot;
}


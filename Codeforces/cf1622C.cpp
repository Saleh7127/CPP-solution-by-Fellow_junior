/***
 created: 2022-01-06-22.59.31
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
        ll n,m,i,j,k,l,sum=0,ans;

        cin>>n>>k;

        ll a[n+4];

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }


        ans=max(0ll,sum-k);

        l=ans;

        sort(a+1,a+n+1);

        sum=0;

        for(i=n; i>=2; i--)
        {
            sum+=a[i];

            if((sum-(n-i+1)*a[1])>=l) m=0;

            else
            {
                m=(l-sum+(n-i+1)*a[1])/(n-i+2);

                if((l-sum+(n-i+1)*a[1])%(n-i+2)!=0) m++;

                //m=max(m,0ll);
            }

            ans=min(ans,m+n-i+1);
        }

        cout<<ans<<nl;


    }

    get_lost_idiot;
}

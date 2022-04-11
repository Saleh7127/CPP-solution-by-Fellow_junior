/***
 created: 2022-01-30-21.59.15
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
        ll a,b,n,m,i,j,ans=0;;

        cin>>a>>b;


        ans=b-a;

        for(i=a; i<=b; i++)
        {
            m=i|b;

            if(m==b) ans=min(ans,i-a+1);
            else
            {
                ans=min(ans,i-a+1+m-b);
            }
        }

        n=a|b;

        for(i=b; i<=n; i++)
        {
            m=i|a;

            ans=min(ans,m-b+1);

        }

        cout<<ans<<nl;
    }


    get_lost_idiot;
}


/***
 created: 2021-11-26-00.40.47
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
        ll n,m,i,j,k,l=0,xx=0;

        cin>>n>>m;

        ll a[n+4];

        for(i=0; i<n; i++) cin>>a[i];

        ll s,e;

        for(i=0; i<n; i++)
        {
            m+=a[i];

            if(m>=0)
            {
                j=i-l+1;
                if(j>xx)
                {
                    xx=j;
                    s=l+1;
                    e=i+1;
                }
            }
            else
            {
                j=i-l;
                if(j>xx)
                {
                    xx=j;
                    s=l+1;
                    e=i;
                }
                while(m<0) m-=a[l++];
            }
        }

        if(xx) cout<<s<<" "<<e<<nl;
        else cout<<-1<<nl;
    }



    get_lost_idiot;
}


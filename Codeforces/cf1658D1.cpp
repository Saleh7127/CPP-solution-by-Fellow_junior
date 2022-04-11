/***
 created: 2022-03-27-22.04.44
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
        ll n,m,i,j,k,l,r,ans=0,u=1;

        cin>>l>>r;

        ll z[25]={0};
        ll z1[25]={0};
        ll o[25]={0};
        ll o1[25]={0};

        for(i=l;i<=r;i++)
        {
            m=i;
            for(j=0;j<19;j++)
            {
                if(m%2) o[j]++;
                else z[j]++;
                m/=2;
            }
        }

        for(i=l;i<=r;i++)
        {
            cin>>k;
            m=k;
            for(j=0;j<19;j++)
            {
                if(m%2) o1[j]++;
                else z1[j]++;
                m/=2;
            }
        }

        for(i=0;i<19;i++)
        {
            if(o[i]!=o1[i] || z[i]!=z1[i]) ans+=u;
            u*=2;
        }
        cout<<ans<<nl;
    }

    get_lost_idiot;
}


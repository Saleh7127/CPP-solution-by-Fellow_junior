/***
 created: 2022-03-01-22.29.29
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
        ll n,m=0,i,j,k=0,l,h=0;

        cin>>n;

        vector<ll>a,b;

        for(i=1;i<=n;i++)
        {
            cin>>j;
            l=min(l,j);
            h=max(h,j);
            a.push_back(j);
        }

        if(l==a[n-1]) cout<<l<<nl;
        else
        {
            while(l<=h)
            {
                ll mid=(l+h)/2;

                b=a;

                m=0;

                for(i=n-1;i>=2;i--)
                {
                    if(b[i]>=mid)
                    {
                        j=min(b[i]-mid,a[i])/3;
                        b[i-1]+=j;
                        b[i-2]+=(j*2);
                        b[i]-=(3*j);
                    }
                    else
                    {
                        m=1;
                        break;
                    }
                }

                j=*min_element(b.begin(),b.end());


                if(j<mid) m=1;

                if(m)
                {
                    h=mid-1;
                }
                else
                {
                    k=mid;
                    l=mid+1;
                }
            }

            cout<<k<<nl;
        }

    }

    get_lost_idiot;
}


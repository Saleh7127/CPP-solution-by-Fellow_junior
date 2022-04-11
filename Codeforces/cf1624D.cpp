/***
 created: 2022-01-10-21.44.04
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
        ll n,m,i,j,k,l,ans=0;

        string a;

        map<char,ll>x;

        cin>>n>>k;

        cin>>a;

        if(n==k)
        {
            cout<<1<<nl;
            continue;
        }

        for(i=0; a[i]; i++)
        {
            x[a[i]]++;
        }

        vector<ll>z;

        for(char c ='a'; c<='z'; c++)
        {
            if(x[c]!=0)
            {
                z.push_back(x[c]);
            }
        }

        l=0;
        j=0;

        for(i=0; i<z.size(); i++)
        {
            l+=z[i]/2;
            j+=z[i]%2;
        }

        ll lo=1,hi;

        hi= 1+ n/k;

        while(lo<=hi)
        {
            ll mid=(lo+hi)/2;

            m=mid/2;
            m*=k;

            if(mid%2==0)
            {
                if(l>=m)
                {
                    lo=mid+1;
                    ans=mid;
                }
                else hi=mid-1;
            }

            else
            {
                if(l>=m && k<=(2*(l-m)+j))
                {
                    lo=mid+1;
                    ans=mid;
                }
                else hi=mid-1;
            }
        }

        cout<<ans<<nl;

    }

    get_lost_idiot;
}


/***
 created: 2022-02-17-14.14.40
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
        ll n,m=0,i,j=0,k,l;

        cin>>n>>k;

        vector<ll>a,b;

        for(i=0; i<n; i++)
        {
            cin>>l;
            if(l>0) a.push_back(l);
            else b.push_back(abs(l));
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        if(a.size())
        {
            for(i=a.size()-1-k; i>=0; i-=k)
            {
                m+=a[i];
            }
        }

        if(b.size())
        {
            for(i=b.size()-1-k; i>=0; i-=k)
            {
                j+=b[i];
            }
        }


        m=(m+j)*2;

        if(a.size() && b.size())
        {
            m+=(2*min(a.back(),b.back()));
            m+=max(a.back(),b.back());
        }
        else if(a.size())
        {
            m+=a.back();
        }
        else
        {
            m+=b.back();
        }

        cout<<m<<nl;
    }

    get_lost_idiot;
}


/***
 created: 2021-11-22-15.43.00
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
        ll n,m,i,j,k,l,a,b;

        cin>>n>>a>>b;

        vector<ll>x;

        map<ll,ll>y;

        l=n/2;

        x.push_back(a);

        y[a]=1;

        l--;

        for(i=n; i>=1; i--)
        {
            if(l==0) break;
            if(i!=b && i!=a)
            {
                x.push_back(i);
                y[i]=1;
                l--;
            }
        }

        for(i=1; i<=n; i++)
        {
            if(y[i]==0) x.push_back(i);
        }

        l=0;

        for(i=0; i<(n/2); i++)
        {
            if(x[i]<a)
            {
                l=1;
            }
        }

        for(i=n/2; i<n; i++)
        {
            if(x[i]>b) l=1;
        }



        if(l || x.size()!=n) cout<<-1<<nl;

        else
        {
            for(auto d:x)
            {
                cout<<d<<" ";
            }
            cout<<nl;
        }


    }

    get_lost_idiot;
}


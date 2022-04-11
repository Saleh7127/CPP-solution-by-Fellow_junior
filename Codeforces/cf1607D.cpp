/***
 created: 2021-11-03-17.18.42
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

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        char c;
        priority_queue<ll,vector<ll>,greater<int>>r,b;


        for(i=1; i<=n; i++)
        {
            cin>>c;

            if(c=='B')
            {
                if(a[i]>0) b.push(a[i]);
            }
            else if(c=='R' && a[i]<=n) r.push(a[i]);
        }

        for(i=1; i<=n; i++)
        {
            if(!b.empty() && b.top()>=i)
            {
                b.pop();
            }

            else if(!r.empty() && r.top()<=i)
            {
                r.pop();
            }
            else
            {
                l=1;
                break;
            }
        }

        if(l==0) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }


    get_lost_idiot;
}

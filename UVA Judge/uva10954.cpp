/***
 created: 2022-03-15-22.07.58
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

    ll n;

    while(cin>>n && n)
    {
        ll i,j,k=0,l=0;

        priority_queue <ll, vector<ll>, greater<ll>> q;

        for(i=0;i<n;i++)
        {
            cin>>j;

            q.push(j);
        }


        while(q.size()!=1)
        {
            i=q.top();
            q.pop();
            j=q.top();
            q.pop();

            k+=(i+j);

            q.push(i+j);
        }

        cout<<k<<nl;
    }

    get_lost_idiot;
}

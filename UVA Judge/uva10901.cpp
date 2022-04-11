/***
 created: 2022-03-24-20.10.01
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
        ll n,m,t,i,j,k,l;

        cin>>n>>t>>m;

        queue<pair<ll,ll>>q[5];


        for(i=0;i<m;i++)
        {
            string a;


            cin >>k >>a;

            if(a=="left") q[0].push({k,i});
            else q[1].push({k,i});
        }

        vector<ll>ans(m);

        ll flag=0;

        l=0;

        while(!q[0].empty() || !q[1].empty())
        {
            j=0;

            if(q[0].empty()) k=q[1].front().first;

            else if(q[1].empty()) k=q[0].front().first;

            else
            {
                k=min(q[0].front().first,q[1].front().first);
            }

            l=max(l,k);


            while(q[flag].empty()==false && j<n && q[flag].front().first<=l)
            {
                ans[q[flag].front().second]=l+t;
                q[flag].pop();
                j++;
            }

            l+=t;

            flag^=1;

        }

        if(cs>1) cout<<nl;

        for(auto d:ans)
        {
            cout<<d<<nl;
        }

    }

    get_lost_idiot;
}


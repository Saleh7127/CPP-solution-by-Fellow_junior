/***
 created: 2022-02-22-22.17.35
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
        ll n,m,i,j,k,l;

        cin>>n>>k;

        ll a[n+4],psum[n+5];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            psum[i]=-1e12;
        }

        psum[n]=psum[n+1]=-1e12;

        //memset(psum,-1,sizeof psum);

        for(i=0;i<n;i++)
        {
            m=0;
            for(j=i;j<n;j++)
            {
                m+=a[j];
                psum[j-i+1]=max(psum[j-i+1],m);
            }
        }

        vector<ll>ans;

        for(i=0;i<=n;i++)
        {
            m=0;
            for(j=1;j<=n;j++)
            {
                m=max(m,psum[j]+min(i,j)*k);
            }
            ans.push_back(m);
        }

        for(auto d:ans)
        {
            cout<<d<<" ";
        }
        cout<<nl;


    }


    get_lost_idiot;
}


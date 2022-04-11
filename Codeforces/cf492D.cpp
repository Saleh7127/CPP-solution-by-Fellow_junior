/***
 created: 2022-03-28-23.44.11
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

    ll n,m,i,j,k,l=1,x,y;

    cin>>n>>x>>y;

    vector<ll>ans(x+y+4,-1);


    ans[0]=0;

    i=j=1;

    while(i<=x || j<=y)
    {
        if(i*y==j*x)
        {
            ans[l]=ans[l+1]=0;
            l+=2;
            i++,j++;
        }
        else if(i*y<j*x)
        {
            ans[l++]=1;
            i++;
        }
        else
        {
            ans[l++]=2;
            j++;
        }
    }

    for(i=0;i<n;i++)
    {
        cin>>m;

        m%=(x+y);

        string as="Vanya";

        if(ans[m]==0) as="Both";
        if(ans[m]==2) as="Vova";

       cout<<as<<nl;
    }

    get_lost_idiot;
}

/***
 created: 2022-03-29-22.46.56
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll a[50][50];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m=0,i,j,k=1,l;


    cin>>n;


    l=(n+1)/2;

    for(i=1;i<=n;i++)
    {
        for(j=l;j<=n-l+1;j++)
        {
            a[i][j]=k;
            k+=2;
        }
        if(m==0) l--;

        if(l==0)
        {
            l=1;
            m=1;
        }
        if(m) l++;
    }

    l=2;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]) cout<<a[i][j]<<" ";
            else
            {
                cout<<l<<" ";
                l+=2;
            }
        }
        cout<<nl;
    }

    get_lost_idiot;
}

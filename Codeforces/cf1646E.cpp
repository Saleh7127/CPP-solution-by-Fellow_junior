/***
 created: 2022-03-07-17.04.55
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

bool v[1000005*20];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    map<ll,ll>x,y;

    cin>>n>>m;

    l=0;

    for(i=1;i<=20;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(!v[i*j])
            {
                v[i*j]=1;
                l++;
            }
        }
        x[i]=l;
    }

    m=1;


    for(i=2;i<=n;i++)
    {
        if(y[i]==0)
        {
            l=i,j=0;
            while(l<=n)
            {
                y[l]=1;
                j++;
                l*=i;
            }
            m+=x[j];
        }
    }

    cout<<m<<nl;


    get_lost_idiot;
}

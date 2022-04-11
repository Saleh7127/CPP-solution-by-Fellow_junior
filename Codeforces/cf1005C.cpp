/***
 created: 2022-04-08-17.03.22
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

    map<ll,ll>x,y;


    vector<ll>p;


    ll n,m=0,i,j,k,l=1,h;

    cin>>n;

    ll a[n+4];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        y[a[i]]++;
    }

    for(i=0; i<n; i++)
    {
        l=0;
        for(j=0; j<32; j++)
        {
            k=(1<<j);

            h=abs(k-a[i]);

            if(h==a[i])
            {
                if(y[h]>=2)
                {
                    l=1;
                    break;
                }
            }

            else
            {
                if(y[k-a[i]])
                {
                    l=1;
                    break;
                }
            }
        }
        if(!l) m++;
    }

    cout<<m<<nl;

    get_lost_idiot;
}


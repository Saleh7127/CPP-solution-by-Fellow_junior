/***
 created: 2022-03-31-17.33.01
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

    string a;

    ll n,m,i,j=0,k,l=0;

    cin>>a;

    for(i=0;a[i];i++)
    {
        if(a[i]=='0')
        {
            cout<<2<<" "<<l+1<<nl;
            l=(l+1)%4;
        }
        else
        {
            cout<<1<<" "<<j+1<<nl;
            j=(j+2)%4;
        }
    }

    get_lost_idiot;
}

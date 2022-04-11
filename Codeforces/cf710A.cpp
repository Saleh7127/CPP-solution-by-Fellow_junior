/***
 created: 2022-03-29-23.04.17
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
    ll n,m,i,j,k,l;


    cin >> a;


    if(a[1]=='8')
    {
        if(a[0]=='h' || a[0]=='a')
        {
            l=3;
        }
        else
        {
            l=5;
        }
    }
    else if(a[1]=='1')
    {
        if(a[0]=='h' || a[0]=='a')
        {
            l=3;
        }
        else
        {
            l=5;
        }
    }
    else if(a[0]=='a' || a[0]=='h')
    {
        l=5;
    }
    else l=8;


    cout<<l<<nl;

    get_lost_idiot;
}

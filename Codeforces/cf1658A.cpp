/***
 created: 2022-03-27-22.00.00
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

        string a;

        cin>>n>>a;

        vector<ll>x;

        for(i=0;i<n;i++)
        {
            if(a[i]=='0') x.push_back(i);
        }

        for(i=1;i<x.size();i++)
        {
            k=x[i]-x[i-1]-1;
            if(k==0) l+=2;
            else if(k==1) l++;
        }

        cout<<l<<nl;
    }

    get_lost_idiot;
}


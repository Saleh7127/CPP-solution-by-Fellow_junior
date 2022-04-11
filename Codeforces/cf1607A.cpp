/***
 created: 2021-11-02-20.33.13
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

        map<char,ll>b;

        cin>>a;

        for(i=0; i<a.size(); i++)
        {
            b[a[i]]=i;
        }

        cin>>a;

        if(a.size()==1) cout<<0<<nl;
        else

        {
            for(i=0; i<a.size()-1; i++)
            {
                l+=abs(b[a[i]]-b[a[i+1]]);
            }
            cout<<l<<nl;
        }
    }


    get_lost_idiot;
}

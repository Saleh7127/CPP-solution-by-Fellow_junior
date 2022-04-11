/***
 created: 2022-04-07-23.15.59
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

    cin>>n>>k;
    cin>>a;

    for(char c='a';c<='z';c++)
    {
        if(k)
        {
            for(i=0;i<n;i++)
            {
                if(k)
                {
                    if(a[i]==c)
                    {
                        a[i]='2';
                        k--;
                    }
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='2') cout<<a[i];
    }

    cout<<nl;

    get_lost_idiot;
}

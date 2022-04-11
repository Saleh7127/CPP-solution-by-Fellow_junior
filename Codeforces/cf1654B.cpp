/***
 created: 2022-03-22-15.55.48
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

        string a;

        cin>>a;

        map<char,ll>x,y;

        for(auto c:a) x[c]++;

        for(i=0;i<a.size();i++)
        {
            x[a[i]]--;

            if(x[a[i]]==0)
            {
                for(j=i;j<a.size();j++)
                {
                    cout<<a[j];
                }
                break;
            }
        }
        cout<<nl;

    }


    get_lost_idiot;
}

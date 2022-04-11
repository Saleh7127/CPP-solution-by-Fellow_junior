/***
 created: 2022-03-22-16.09.01
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

        cin>>n;

        multiset<ll>x,y;

        for(i=0;i<n;i++)
        {
            cin>>m;
            l+=m;
            x.insert(m);
        }

        y.insert(l);

        while(y.size()>0 && n)
        {
            j=*--y.end();
            y.erase(--y.end());

            if(x.find(j)!=x.end())
            {
                x.erase(x.find(j));
            }
            else
            {
                n--;
                y.insert(j/2);
                y.insert(j/2 + j%2);
            }
        }

        if(x.size()==0 && y.size()==0) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }

    get_lost_idiot;
}

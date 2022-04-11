/***
 created: 2022-03-16-04.34.06
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
        ll n,m=0,i,j,k=0,l=0;

        string a;

        map<ll,ll>x;

        cin>>n>>a;

        for(i=0;i<n;i++)
        {
            if(a[i]=='1')
            {
                l++;
                if(m)
                {
                    x[i]=m;
                    m--;
                }
                else x[i]=l;
            }
            else
            {
                m++;
                if(l) l--;
                x[i]=m;
            }
            k=max({k,l,m});
        }

        cout<<k<<nl;


        for(i=0;i<n;i++) cout<<x[i]<<" ";

        cout<<nl;

    }


    get_lost_idiot;
}

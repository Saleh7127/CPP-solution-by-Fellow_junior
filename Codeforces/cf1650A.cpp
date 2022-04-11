/***
 created: 2022-03-08-20.34.44
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
        string a;
        char c;

        ll n,m,i,j,k,l=0;


        cin>>a;
        cin>>c;

        n=a.size();

        for(i=0;i<n;i++)
        {
            if(a[i]==c)
            {
                k=n-i-1;

                if(i%2==0 && k%2==0)
                {
                    l=1;
                }
            }
        }

        if(l) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }

    get_lost_idiot;
}


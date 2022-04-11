/***
 created: 2021-11-12-21.47.48
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

        for(i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                l=1;
                break;
            }
        }

        if(l==0)
        {
            cout<<0<<nl;
        }
        else
        {
            l=0;
            vector<ll>x,y;
            for(i=0; i<n; i++)
            {
               if(a[i]=='0')
               {
                    l++;
                    x.push_back(0);
               }
               else x.push_back(1);
            }


            for(i=0;i<n;i++)
            {
                 if(x[i]==1 && i<l)
                 {
                      y.push_back(i);
                 }
                 if(x[i]==0 && i>=l)
                 {
                      y.push_back(i);
                 }
            }

            cout<<1<<nl<<y.size();

            for(auto d:y)
            {
                 cout<<" "<<(d+1);
            }
            cout<<nl;
        }
    }



    get_lost_idiot;
}


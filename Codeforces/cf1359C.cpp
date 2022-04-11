/***
 created: 2022-01-08-12.14.41
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
        ll h,c,n,m,k,t,l,ans,x;

        cin>>h>>c>>t;

        if((h+c)>= t*2) cout<<2<<nl;

        else
        {
             x=(t-c)/(2*t-h-c);

             m=x+1;

             double i=(h*x + c*(x-1))/(2.000*x - 1);
             double j=(h*m + c*(m-1))/(2.000*m - 1);

             if(abs(t-i)<=abs(t-j))
             {
                  cout<<2*x - 1<<nl;
             }
             else cout<<2*m -1<<nl;

        }

    }


    get_lost_idiot;
}


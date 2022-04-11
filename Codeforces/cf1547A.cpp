#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll n,m,i,j,k,l;
        ll x[20],y[20];

        for(i=0; i<3; i++)
        {
            cin>>x[i]>>y[i];
        }


        l = abs(x[0]-x[1]) + abs(y[0]-y[1]);
        if (y[0]==y[1] && y[1]==y[2] && x[2]> min(x[0], x[1]) && x[2]< max(x[0], x[1])) l+= 2;
        if (x[0]==x[1] && x[1]==x[2] && y[2]> min(y[0], y[1]) && y[2]< max(y[0], y[1])) l+= 2;

        cout<<l<<endl;

    }

    return 0;
}

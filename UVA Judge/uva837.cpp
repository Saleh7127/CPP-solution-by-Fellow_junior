/***
 created: 2022-03-07-20.35.13
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
        ll n,i,j,k,l;

        double x,y,x1,y1,c,s;

        cin>>n;

        vector<double>xx;

        vector<pair<pair<double,double>,double>>seg;


        for(i=0;i<n;i++)
        {
            cin>>x>>y>>x1>>y1>>c;

            xx.push_back(x);
            xx.push_back(x1);

            if(x>x1) swap(x,x1);

            seg.push_back({{x,x1},c});
        }

        sort(xx.begin(),xx.end());

        if(cs>1) cout<<nl;

        cout<<xx.size()+1<<nl;

        cout<<"-inf "<<fixed<<setprecision(3)<<xx[0]<<" 1.000"<<nl;


        for(i=0;i<xx.size()-1;i++)
        {
            cout<<fixed<<setprecision(3)<<xx[i]<<" "<<fixed<<setprecision(3)<<xx[i+1]<<" ";

            s=1.000;

            for(auto dd:seg)
            {
                if(xx[i]>=dd.first.first && xx[i+1]<=dd.first.second)
                {
                    s*=dd.second;
                }
            }

            cout<<fixed<<setprecision(3)<<s<<nl;
        }

        cout<<fixed<<setprecision(3)<<xx[xx.size()-1]<<" +inf 1.000"<<nl;

    }

    get_lost_idiot;
}



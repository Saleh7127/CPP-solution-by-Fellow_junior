#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<pair<double,double>>m;
double Mid;

bool compare(pair<double,double>a,pair<double,double>b)
{
    if(a.first-Mid*a.second>b.first-Mid*b.second) return 1;
    else return 0;
}

bool solve(double mid,ll sub)
{
    Mid=mid/100.00;
    sort(m.begin(),m.end(),compare);

    double p=0.0,t=0.0,res;
    for(ll i=0; i<sub; i++)
    {
        p+=m[i].first;
        t+=m[i].second;
    }
    res=(p*100.00)/t;

    if(res>=mid) return 1;
    else return 0;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,d,i,j,k;
        cin>>n>>d;

        m.clear();

        for(i=0; i<n; i++)
        {
            pair<double,double>a;
            cin>>a.first>>a.second;
            m.push_back(a);
        }

        double lo=0.0,hi=100.00,ans=0.0,mid;

        while(hi-lo>0.0000001)
        {
            mid=(lo+hi)/2.0;

            if(solve(mid,n-d))
            {
                ans=mid;
                lo=mid;
            }
            else hi=mid;
        }

        cout<<"Case "<<cs<<": "<<setprecision(9)<<ans<<endl;

    }


    return 0;
}

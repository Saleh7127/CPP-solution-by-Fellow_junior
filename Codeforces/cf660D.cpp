#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    ll n,m,i,j,k=0,l=0;

    cin>>n;

    ll x[n+5],y[n+5];


    map<pair<ll,ll>,ll>ss;



    for(i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];

    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {

            k=x[i]+x[j];
            l=y[i]+y[j];

            ss[{k,l}]++;
        }
    }
    l=0;

    for(auto i: ss)
    {
        l+=(i.second*(i.second-1)/2);
    }


    cout<<l<<endl;


    return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    set<ll>x,y;
    set<pair<ll,ll>>xy;

    ll n,m,i,j,k,l;

    for(i=0; i<8; i++)
    {
        cin>>n>>m;
        x.insert(n);
        y.insert(m);
        xy.insert({n,m});
    }

    if(x.size()!=3 || y.size()!=3 || xy.size()!=8)
    {
        cout<<"ugly"<<endl;
        return 0;
    }

    j=0;
    for(auto r:x)
    {
        j++;
        if(j==2)
        {
            k=r;
            break;
        }
    }
    j=0;
    for(auto r:y)
    {
        j++;
        if(j==2)
        {
            l=r;
            break;
        }
    }

    if(xy.count({k,l}))
    {
        cout<<"ugly"<<endl;
        return 0;
    }


    cout<<"respectable"<<endl;

    return 0;
}


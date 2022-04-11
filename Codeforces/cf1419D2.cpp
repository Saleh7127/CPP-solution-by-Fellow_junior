#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<ll>a,c,d,e;
    ll n,f,i,j,k,l=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>j;
        a.push_back(j);
    }
    sort(a.begin(),a.end());

    f=n/2;
    for(i=0; i<f; i++)
    {
        c.push_back(a[i]);
    }
    for(i=f; i<n; i++)
    {
        d.push_back(a[i]);
    }

    if(n%2)
    {
        for(i=0; i<f; i++)
        {
            e.push_back(d[i]);
            e.push_back(c[i]);
        }
        e.push_back(d[i]);
    }
    else
    {
        for(i=0; i<f; i++)
        {
            e.push_back(d[i]);
            e.push_back(c[i]);
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(e[i]<e[i-1] && e[i]<e[i+1])
        {
            l++;
        }
    }
    cout<<l<<endl;
    for(i=0;i<n;i++)
    {
        cout<<e[i]<<" ";
    }


    return 0;
}

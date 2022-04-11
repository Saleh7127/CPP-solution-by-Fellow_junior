#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,x,c,d,e,f,i,j,k,l;
    cin>>n>>x;

    vector<pair<ll,ll>>a;


    for(i=0; i<n; i++)
    {
        cin>>c;
        a.push_back({c,i+1});
    }

    sort(a.begin(),a.end());
    i=0;
    j=n-1;

    while(i<j)
    {
        k=a[i].first+a[j].first;
        if(k==x)
        {
            cout<<min(a[i].second,a[j].second)<<" "<<max(a[i].second,a[j].second)<<endl;
            return 0;
        }
        if(k<x) i++;
        else j--;
    }

    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}

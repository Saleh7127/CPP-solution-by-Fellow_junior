#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l;
        cin>>n>>m;

        vector<pair<ll,ll>>a(m+5);
        vector<ll>x;

        bool visit[n+5]={false};

        for(i=0; i<m; i++)
        {
            cin>>a[i].first>>a[i].second;
        }
        for(i=m-1; i>=0; i--)
        {
            if(visit[a[i].first]==false && visit[a[i].second]==false)
            {
                x.push_back(i);
                visit[a[i].first]=true;
                visit[a[i].second]=true;
            }
        }
        if(x.size()==1)
        {
            cout<<x[0];
        }
        else
        {
            sort(x.begin(),x.end());
            for(i=0; i<x.size(); i++)
            {
                if(i==0) cout<<x[i];
                else cout<<" "<<x[i];
            }
        }
        cout<<endl;
    }
    return 0;
}

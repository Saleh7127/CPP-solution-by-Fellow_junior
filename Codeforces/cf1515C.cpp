#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.first<b.first) return 1;
    if(a.first==b.first)
    {
        if(a.second<b.second) return 1;
        else return 0;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        ll b,c,d,n,m,i,j,x,k,l=0,y=0;

        cin>>n>>m>>x;

        vector<pair<ll,ll>>a;
        ll ans[n+5];


        for(i=0; i<n; i++)
        {
            cin>>b;
            a.push_back({b,i});
        }

        sort(a.begin(),a.end());

        for(i=0;i<n;i++)
        {
            ans[a[i].second]=i%m+1;
        }

        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }


    return 0;
}


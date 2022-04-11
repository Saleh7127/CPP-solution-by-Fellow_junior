#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.first!=b.first)
        return a.first>b.first;
    else
        return a.second>b.second;
}

bool cmp1(pair<ll,ll>a,pair<ll,ll>b)
{
    return a.second>b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l;

        cin>>n>>m;

        ll a[n+2][m+2];
        memset(a,0,sizeof a);
        vector<pair<ll,ll>>x;
        x.clear();

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>k;
                x.push_back({k,i});
            }
        }
        sort(x.begin(),x.end(),cmp);
        i=0;
        while(x.size())
        {
            if(i<m)
            {
                a[x[x.size()-1].second][i]=x[x.size()-1].first;
                i++;
                x.pop_back();
            }
            else break;
        }
        sort(x.begin(),x.end(),cmp1);

        for(i=0;i<n;i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]==0)
                {
                    a[i][j]=x[x.size()-1].first;
                    x.pop_back();
                }
                //else continue;
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}

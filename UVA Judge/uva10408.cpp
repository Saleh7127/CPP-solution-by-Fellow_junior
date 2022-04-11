#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<pair<double,pair<ll,ll>>>x;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    while(cin>>n>>k)
    {
        x.clear();

        x.push_back(make_pair(1.00,make_pair(1,1)));

        ///x.push_back({1.00,{1,1}});

        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(__gcd(i,j)!=1)
                {
                    continue;
                }
                else
                {
                    x.push_back(make_pair((double)i/j,make_pair(i,j)));
                    ///x.push_back({(double)i/j,{i,j}});
                }
            }
        }
        sort(x.begin(),x.end());

        cout<<x[k-1].second.first<<"/"<<x[k-1].second.second<<endl;

    }


    return 0;
}


/*

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<pair<double,pair<ll,ll>>>x;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    while(cin>>n>>k)
    {
        x.clear();

        x.emplace_back(1.00,make_pair(1,1));

        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(__gcd(i,j)!=1)
                {
                    continue;
                }
                else
                {
                    x.emplace_back((double)i/j,make_pair(i,j));
                }
            }
        }
        sort(x.begin(),x.end());

        cout<<x[k-1].second.first<<"/"<<x[k-1].second.second<<endl;

    }


    return 0;
}

*/

/*

#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    double c=(double)a.first/a.second;
    double d=(double)b.first/b.second;

    return c<d;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    while(cin>>n>>k)
    {
        vector<pair<ll,ll>>x;

        x.push_back({1,1});

        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(__gcd(i,j)!=1)
                {
                    continue;
                }
                else
                {
                    x.push_back(make_pair(i,j));
                }
            }
        }
        sort(x.begin(),x.end(),cmp);

        cout<<x[k-1].first<<"/"<<x[k-1].second<<endl;

    }


    return 0;
}

*/

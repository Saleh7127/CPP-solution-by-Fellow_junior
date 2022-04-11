#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)ll n,m;
ll n,m;
ll xx(string a)
{
    ll c=0,i,j;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(a[i]>a[j])
            {
                c++;
            }
        }
    }
    return c;
}

bool cmp(pair<ll,string >a,pair<ll,string>b)
{
    return a.first<b.first;
}
int main()
{

    ll i,j,k=0,l;

    ll z,r;
    cin>>z;
    for(r=1; r<=z; r++)
    {

        vector<pair<ll,pair<ll,string>>>a;

        string x;

        cin>>n>>m;

        for(i=0; i<m; i++)
        {
            cin>>x;
            a.push_back(make_pair(xx(x),make_pair(i,x)));
        }

        sort(a.begin(),a.end());

        if(k) cout<<endl;

        for(i=0; i<m; i++)
        {
            cout<<a[i].second.second<<endl;
        }

        k=1;
    }


    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

bool check(vector<ll>x)
{
    if(x.size()<=2) return 1;
    if(x.size()>=5) return 0;

    for(ll i=0; i<x.size(); i++)
    {
        for(ll j=i+1; j<x.size(); j++)
        {
             for(ll k=j+1;k<x.size();k++)
             {
                   if(x[i]<=x[j] && x[j]<=x[k]) return 0;
                   if(x[i]>=x[j] && x[j]>=x[k]) return 0;
             }
        }
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l=0;

        cin>>n;

        vector<ll>a(n+4);

        for(i=0; i<n; i++) cin>>a[i];

        for(i=0; i<n; i++)
        {
            vector<ll>x;

            for(j=i; j<n; j++)
            {
                x.push_back(a[j]);

                if(check(x)) l++;
                else break;
            }
        }

        cout<<l<<endl;

    }

    return 0;
}

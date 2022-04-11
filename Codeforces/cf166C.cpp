#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m=-1,i,x,j,k,l;

    cin>>n>>x;

    vector<ll>a;

    for(i=0; i<n; i++)
    {
        cin>>m;
        a.push_back(m);
    }

    sort(a.begin(),a.end());

    if(a[(a.size()+1)/2 -1]==x) cout<<0<<endl;
    else if(a[a.size()-1]<x) cout<<n+1<<endl;
    else if(a[0]>x) cout<<n<<endl;
    else
    {
        for(i=0; i<=n; i++)
        {
            a.push_back(x);

            sort(a.begin(),a.end());
            if(a[(a.size()+1)/2 -1]==x)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }

    return 0;
}

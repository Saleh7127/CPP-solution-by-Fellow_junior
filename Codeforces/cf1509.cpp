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

        vector<ll>a,b;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>m;
            if(m%2) a.push_back(m);
            else b.push_back(m);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        for(auto i:a)
        {
            cout<<i<<" ";
        }
        for(auto i:b)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}

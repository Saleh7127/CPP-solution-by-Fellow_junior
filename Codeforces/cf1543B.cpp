#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j=0,k,l;

        cin>>n;

        ll a[n+4];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            j+=a[i];
        }

        if(j%n==0) cout<<0<<endl;
        else
        {
            l=j%n*(n-(j%n));

            cout<<l<<endl;
        }

    }

    return 0;
}


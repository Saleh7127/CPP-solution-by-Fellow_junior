#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l=0;

        cin>>n;

        ll a[n+5];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(i%2==0) l+=a[i];
        }

        if(n==1)
        {
             cout<<l<<endl;
             continue;
        }

        vector<ll>x;

        for(i=1; i<n; i++)
        {
            x.push_back(a[i]-a[i-1]);
        }

        j=k=0;

        for(i=0; i<x.size(); i+=2)
        {
            j+=x[i];

            if(j<0) j=0;

            k=max(k,j);
        }

        x.clear();

        for(i=1; i<n-1; i+=2)
        {
            x.push_back(a[i]-a[i+1]);
        }

        j=0;

        for(i=0; i<x.size(); i++)
        {
            j+=x[i];

            if(j<0) j=0;

            k=max(k,j);
        }

        cout<<l+k<<endl;
    }


    return 0;
}

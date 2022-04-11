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
        ll n,m=0,i,j,k,l=0;

        cin>>n;
        ll a[n+4];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }


        for(i=0;i<n-1;i++)
        {
             j=min(a[i],a[i+1]);
             k=max(a[i],a[i+1]);
             m=max(m,j*k);
        }

        cout<<m<<endl;
    }


    return 0;
}

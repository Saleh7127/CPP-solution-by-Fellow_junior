#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{


    test
    {
        ll a[200005],n,c=0,d,i,j,k,l;
        cin>>n;

        c=0;
        d=0;
        for( i=0; i<n; i++)
        {
            cin>>a[i];
            c+=a[i];
        }

        sort(a,a+n);
        d=a[n-1];

        k=(n-1)*d;
        if(k==c) cout<<0<<endl;
        ///else if(k*d<c) cout<<c%(k*d)<<endl;
        else if(c>k)
        {
            d=ceil((double)c/(n-1));
            cout<<(d*(n-1))-c<<endl;
        }
        else cout<<k-c<<endl;

    }


    return 0;
}

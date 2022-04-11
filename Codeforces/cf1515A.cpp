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

        ll n,m,i,j,k,l=0;

        cin>>n>>k;

        ll a[n+5];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            l+=a[i];
        }
        if(l==k) cout<<"NO"<<endl;
        else
        {
            l=0;
            for(i=0; i<n-1; i++)
            {
                l+=a[i];
                if(l==k)
                {
                    swap(a[i],a[i+1]);
                }
            }
            cout<<"YES"<<endl;
            for(i=0; i<n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }


    }


    return 0;
}

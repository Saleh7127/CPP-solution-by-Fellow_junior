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

        cin>>n;
        ll a[n+4],b[n+4];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }

        sort(a,a+n);

        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                 l=2;
                 break;
            }
        }

        if(l==0) cout<<0<<endl;
        else
        {
             if(b[0]==1 || b[n-1]==n) l=1;
             else if(b[0]==n && b[n-1]==1) l=3;
             else l=2;

             cout<<l<<endl;
        }


    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{


    test

    {
        ll n,i,j;

        cin>>n;

        ll m=n*2;
        ll a[m+4];


        for(i=0; i<m; i++) cin>>a[i];

        sort(a,a+m);

        for(i=0,j=m-1; i<j; i++,j--)
        {
            cout<<a[j]<< " ";

            if(i<j) cout<<a[i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}


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
        ll n,m,i,j,k,l,x;

        cin>>n>>m;

        ll a[n+4];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n,greater<int>());

        k=a[0];
        l=a[1];


        j=k+l;

        x=m/j;

        if((m%j)<=k && m%j) cout<<2*x +1<<endl;
        else if((m%j)>k && m%j) cout<<2*x +2<<endl;
        else cout<<2*x<<endl;

    }


    return 0;
}

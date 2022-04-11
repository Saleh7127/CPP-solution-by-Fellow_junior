/***
 created: 2021-11-13-21.44.43
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll lis[100005];
ll lds[100005];
ll a[100005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    test

    {
        cin>>n;

        vector<ll>x(n);

        for(i=0; i<n; i++)
        {
            cin>>x[i];
        }

        for(i=0; i<n+4; i++) a[i]=1e9;

        for(i=0; i<n; i++)
        {
            k=lower_bound(a,a+n,x[i])-a;
            lis[i]=k+1;
            a[k]=x[i];
        }

        reverse(x.begin(),x.end());

        for(i=0; i<n+4; i++) a[i]=1e9;

        for(i=0; i<n; i++)
        {
            k=lower_bound(a,a+n,x[i])-a;
            lds[i]=k+1;
            a[k]=x[i];
        }

        l=0;

        for(i=0; i<n; i++)
        {
            k=min(lis[i],lds[n-i-1]);
            k*=2;
            l=max(l,k-1);
        }

        cout<<"Case "<<cs<<": "<<l<<endl;

        memset(lis,0,sizeof lis);
        memset(lds,0,sizeof lds);


    }

    return 0;
}

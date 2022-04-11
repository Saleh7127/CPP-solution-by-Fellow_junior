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
        ll n,m,i,j,k=0,l,c,d,e=0;

        cin>>n;

        vector<ll>a[n+5];

        ll x[n+1],y[n+1];

        for(i=0;i<n;i++) cin>>x[i];
        for(i=0;i<n;i++) cin>>y[i];

        for(i=0; i<n; i++)
        {
            a[x[i]].push_back(y[i]);
        }
        ll ans[n+2];
        memset(ans,0,sizeof ans);

        for(i=1;i<=n;i++)
        {
            sort(a[i].rbegin(),a[i].rend());
            vector<ll>dd;
            l=0;
            for(ll ss:a[i])
            {
                l+=ss;
                dd.push_back(l);
            }
            c=a[i].size();
            for(j=1;j<=a[i].size();j++)
            {
                d=c-c%j;
                ans[j]+=dd[d-1];
            }
        }

        for(i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}


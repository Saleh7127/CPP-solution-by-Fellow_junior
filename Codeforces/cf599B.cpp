#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k=0,l=0;

    cin>>n>>m;

    ll f[n+5],a[m+5];

    map<ll,ll>x;

    for(i=1; i<=n; i++)
    {
        cin>>k;
        f[k]=i;
        x[k]++;
    }
    k=0;

    for(i=1; i<=m; i++)
    {
        cin>>a[i];
        if(x[a[i]]==0)
        {
            l=1;
        }
        if(x[a[i]]>1)
        {
            k=1;
        }
    }
    if(l==1) cout<<"Impossible"<<endl;
    else if(k==1) cout<<"Ambiguity"<<endl;
    else
    {
        cout<<"Possible"<<endl;
        for(i=1; i<=m; i++)
        {
            cout<<f[a[i]]<<" ";
        }

        cout<<endl;
    }

    return 0;
}


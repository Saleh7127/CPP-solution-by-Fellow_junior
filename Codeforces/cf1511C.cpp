#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll a[120];
    ll i,j,k,l;

    for(i=0; i<100; i++)
    {
        a[i]=100000000;
    }
    ll n,q,m=0;
    cin>>n>>q;
    for(i=0; i<n; i++)
    {
        cin>>k;
        a[k]=min(a[k],i+1);
        m=max(m,k);
    }
    for(i=0; i<q; i++)
    {
        cin>>k;
        for(j=1; j<=m; j++)
        {
            if(a[j]<a[k] && a[j]!=100000000) a[j]++;
        }
        cout<<a[k]<<" ";
        a[k]=1;
    }
    cout<<endl;
    return 0;
}


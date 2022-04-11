#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,q,m,k,i,j,l,c,d,e,s;

    cin>>n>>q>>k;

    ll a[n+5];
    ll b[n+5]={0};

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<n; i++)
    {
        b[i]=b[i-1];
        b[i]+=(a[i]-a[i-1])-1;
    }
    while(q--)
    {
        cin>>s>>e;

        c=a[s-1]-1;
        c+=((b[e-1]-b[s-1])+(b[e-1]-b[s-1]));
        c+=(k-a[e-1]);
        cout<<c<<endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll ans[30000005];
ll xr[30000005];

void pre()
{
    ll i,j,k,l;
    for(i=1; i<=30000001; i++)
    {
        for(j=2*i; j<=30000000; j+=i)
        {
            k=j-i;
            if(i==(k^j)) xr[j]++;
        }
    }
    ans[0]=0;
    for(i=1;i<=30000000;i++)
    {
        ans[i]=ans[i-1]+xr[i];
    }
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    pre();

    ll n;

    test
    {
        cin>>n;
        cout<<"Case "<<cs<<": "<<ans[n]<<endl;
    }



    return 0;
}

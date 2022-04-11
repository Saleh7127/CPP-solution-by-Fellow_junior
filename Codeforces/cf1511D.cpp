#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,k,i,j,l;

    ll a[100]= {0};
    l=0;

    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cout<<char('a'+l);
        a[l]=(a[l]+1)%k;
        l=a[l];
    }

    cout<<endl;

    return 0;
}

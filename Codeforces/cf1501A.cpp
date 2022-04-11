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

        ll n,m,i,j,k,l=0,ans=0;
        cin>>n;
        vector<pair<ll,ll>>a;
        a.push_back({0,0});
        for(i=0;i<n;i++)
        {
            cin>>j>>k;
            a.push_back({j,k});
        }
        ll b[n+5];
        for(i=0;i<n;i++) cin>>b[i];
        for(i=1;i<=n;i++)
        {
            k=abs(a[i].first-a[i-1].second);
            ans=l+k+b[i-1];
            j=abs(a[i].first-a[i].second);
            j=(double)ceil(j/2.0);
            l=(ans+j);
            l=max(l,(ll)a[i].second);
        }
        cout<<ans<<endl;
    }


    return 0;
}

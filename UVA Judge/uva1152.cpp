#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int ma=3e3;
ll a[ma],b[ma],c[ma],d[ma];
ll ans[ma*ma];
ll n,i,j,k,r,l=0,t=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            ans[t++]=c[i]+d[j];
        }
    }

    sort(ans,ans+t);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            k=a[i]+b[j];
            r=upper_bound(ans,ans+t,-k)-lower_bound(ans,ans+t,-k);
            l+=r;
        }
    }
    cout<<l<<endl;

    return 0;
}

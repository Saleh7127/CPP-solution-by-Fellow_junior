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
        ll a[200000],c,d=0,e=0,f=0,i,j,k,l,m;
        cin>>c;
        for(i=1;i<=c;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+c+1);
        d=a[1]*a[2]*a[3]*a[4]*a[c];
        e=a[1]*a[2]*a[c-2]*a[c-1]*a[c];
        f=a[c-4]*a[c-3]*a[c-2]*a[c-1]*a[c];
        cout<<max(d,max(e,f))<<endl;
    }
    return 0;
}

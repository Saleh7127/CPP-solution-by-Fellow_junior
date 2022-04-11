#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200000],c,d,e=0,f[200000],i,j,k,l;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ///!@]}

    test
    {
        cin>>c;
        e=1;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
        }
        for(i=1;i<c;i++)
        {
            if(a[i]>=a[i-1])
            {
                e=0;
                break;
            }
        }
        if(e==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}

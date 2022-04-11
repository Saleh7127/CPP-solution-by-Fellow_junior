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
        ll n,d,e,i,j,k,l=0;
        cin>>n;
        ll a[n],c[n];
        for(i=1; i<=n; i++)
        {
            a[i]=i;
        }

        for(i=1; i<=n; i++)
        {
            cin>>d;
            if(d<i)
            {
                l=1;
            }
            if(d>i)
            {
                swap(a[d],a[i]);
            }
        }
        if(l) cout<<-1<<endl;
        else
        {
            for(i=1; i<=n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}

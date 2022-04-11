#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[300005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        ll n,i,mi=1e14,b,c;

        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+1+n);
        if(n==2)
        {
            for(i=1; i<=n; i++)
            {
                cout<<a[i]<<" ";
            }

            cout<<endl;
            continue;
        }

        for(i=1; i<n; i++)
        {
            mi=min(a[i+1]-a[i],mi);
        }
        for(i=1; i<n; i++)
        {
            if(a[i+1]-a[i]==mi)
            {
                b=i+1;
                break;
            }
        }
        for(i=b; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
        for(i=1; i<b; i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}


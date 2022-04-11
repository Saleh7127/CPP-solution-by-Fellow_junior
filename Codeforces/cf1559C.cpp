#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l;

        cin>>n;

        ll a[n+4];

        for(i=1; i<=n; i++) cin>>a[i];

        if(a[1]==1)
        {
            cout<<n+1<<" ";
            for(i=1; i<=n; i++) cout<<i<<" ";
        }
        else if(a[n]==0)
        {
            for(i=1; i<=n+1; i++) cout<<i<<" ";
        }
        else
        {
             for(i=1;i<n;i++)
             {
                  if(a[i]==0 && a[i+1]==1)
                  {
                       for(j=1; j<=i; j++) cout<<j<<" ";

                       cout<<n+1<<" ";

                       for(j=i+1; j<=n; j++) cout<<j<<" ";

                       break;
                  }
             }
        }

        cout<<endl;
    }


    return 0;
}

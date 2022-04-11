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
        ll n,m,i,j,k=0,l,b=0;

        cin>>n>>m;

        ll a[n+5];
        map<ll,ll>x;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            b=a[i]%m;
            x[b]++;
        }

        for(i=0; i<m; i++)
        {
            b=m-i;
            if(b<i) break;

            if(i==0 && x[0]>0) k++;
            else if(x[i]==0 && x[b]==0)
            {
                continue;
            }
            else
            {
                if(x[i]==x[b]) k++;
                else
                {
                    k+=abs(x[i]-x[b]);
                }

            }
        }

        cout<<k<<endl;
    }

    return 0;
}

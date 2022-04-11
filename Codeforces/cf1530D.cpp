#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
map<ll,ll>x;
vector<ll>y;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        ll n,m,i,j,k,l=0;

        cin>>n;

        ll a[n+4];

        x.clear();
        y.clear();

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            if(x[a[i]]==0)
            {
                l++;
            }
            x[a[i]]++;
        }

        for(i=1; i<=n; i++)
        {
            if(x[i]==0)
            {
                y.push_back(i);
            }
        }

        if(l==n)
        {
            cout<<n<<endl;
            for(i=1; i<=n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            j=y.size()-1;

            for(i=1; i<=n; i++)
            {
                if(x[a[i]]>1)
                {
                    if(i==y[j]) continue;
                    x[a[i]]--;
                    a[i]=y[j];
                    j--;
                }
            }

            cout<<l<<endl;
            for(i=1; i<=n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}

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
        ll n,m,i,j,k,l=0;

        cin>>n>>k;

        vector<ll>a(n),b(n);

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }

        sort(b.begin(),b.end());

        if(a==b) cout<<"YES"<<endl;
        else
        {
            for(i=0; i<n; i++)
            {
                if(a[i]!=b[i])
                {
                    if(i<k && (n-i-1)<k)
                    {
                        l=1;
                        break;
                    }

                }
            }

            if(l) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

    return 0;
}


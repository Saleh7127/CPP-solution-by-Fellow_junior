#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define get_lost_idiot return 0

bool primecheck(ll x)
{
    if(x<=2) return 1;
    ll i;

    for(i=2; i*i<=x; i++)
    {
        if(x%i==0) return 0;
    }

    return 1;
}

int main()
{

    int tt;
    cin>>tt;
    for(int cs=1; cs<=tt; cs++)
    {
        ll n,m,i,j,k,l=0;

        cin>>n;

        ll a[n+4];

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            l+=a[i];
        }


        if(primecheck(l)==0)
        {
            cout<<n<<endl;
            for(i=0; i<n; i++)
            {
                cout<<i+1<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<n-1<<endl;

            j=0;
            for(i=1;i<=n; i++)
            {
                if(j==0 && a[i]%2==1)
                {
                     j=1;
                     continue;
                }
                cout<<i<<" ";
            }

            cout<<endl;
        }
    }

    get_lost_idiot;
}

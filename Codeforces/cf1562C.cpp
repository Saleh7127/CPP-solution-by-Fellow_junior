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
        string a;

        cin>>n>>a;

        k=n/2;

        for(i=0; i<n/2; i++)
        {
            if(a[i]=='0')
            {
                cout<<i+1<<" "<<n<<" "<<i+2<<" "<<n<<endl;
                l=1;
                break;
            }
        }
        if(!l)
        {
            for(i=n/2; i<n; i++)
            {
                if(a[i]=='0')
                {
                    cout<<1<<" "<<i+1<<" "<<1<<" "<<i<<endl;
                    l=1;
                    break;
                }
            }

            if(!l)
            {
                 cout<<1<<" "<<n-1<<" "<<2<<" "<<n<<endl;
            }
        }

    }

    return 0;
}

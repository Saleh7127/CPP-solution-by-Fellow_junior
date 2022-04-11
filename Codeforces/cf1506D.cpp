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


        ll n,m,i,j=0,k,l;
        cin>>n;


        map<ll,ll>x;

        for(i=0; i<n; i++)
        {
            cin>>l;
            x[l]++;
            j=max(j,x[l]);
        }

        if(n%2==0)
        {
            if(j<=(n/2)) cout<<0<<endl;

            else
            {
                k=j-(n/2);
                cout<<(k*2)<<endl;
            }
        }

        else
        {
            if(j>(n/2))
            {
                k=j-(n/2);
                cout<<(k*2)-1<<endl;
            }

            else
            {
                cout<<1<<endl;
            }
        }
    }


    return 0;
}


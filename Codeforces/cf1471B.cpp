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
        ll n,k,i,l,j=1,d=0,e=1;
        cin>>n>>k;
        ll a[n+5];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            d+=a[i];
        }
        while(e)
        {
            j*=k;
            for(i=0; i<n; i++)
            {
                if(a[i]%k==0)
                {
                    a[i]/=k;
                    d+=(j*a[i]);
                }
                else
                {
                    e=0;
                    break;
                }
            }
        }
        cout<<d<<endl;
    }

    return 0;
}

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

        ll n,m,i,j,k,l;

        cin>>n>>k;
        ll a[n+5];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n-1; i++)
        {

            if(k>=a[i])
            {
                k-=a[i];
                a[n-1]+=a[i];
                a[i]=0;

            }
            else
            {
                a[n-1]+=k;
                a[i]-=k;
                k=0;
            }
            if(k==0) break;
        }

        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


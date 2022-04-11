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
        cin>>n;
        ll a[n+5],b[n+5]={0};
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            b[a[i]-1]=i;
        }
        k=n;
        for(i=n-1; i>=0; i--)
        {
            if(b[i]<k)
            {
                for(j=b[i]; j<k; j++)
                {
                    cout<<a[j]<<" ";
                }
                k=b[i];
            }
        }
        cout<<endl;
    }


    return 0;
}

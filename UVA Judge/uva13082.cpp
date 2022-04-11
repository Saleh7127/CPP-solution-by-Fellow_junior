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
        ll n,m,i,j,k,l=0;

        cin>>n;

        ll a[n+4],b[n+4];

        for(i=0; i<n; i++)
        {
            cin>>a[i];

            b[i]=a[i];
        }

        sort(b,b+n);


        i=j=0;

        while(i<n)
        {
            if(a[i]==b[j])
            {
                 i++;
                 j++;
            }
            else
            {
                l++;
                i++;
            }
        }

        cout<<"Case "<<cs<<": "<<l<<endl;
    }

    return 0;
}


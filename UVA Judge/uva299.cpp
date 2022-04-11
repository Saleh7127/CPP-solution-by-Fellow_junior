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
        ll n,m,i,j,k,l;

        cin>>n;

        ll a[n+4];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        l=0;

        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                     swap(a[i],a[j]);
                     l++;
                }
            }
        }

        cout<<"Optimal train swapping takes "<<l<<" swaps."<<endl;
    }


    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define ld long double
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,k,b,c=0,i,j,l=0,x;
        cin>>n>>k;
        ll a[n+5];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            c+=a[i];
        }

        ld d=(double)k/100.00;

        for(i=n-1; i>0; i--)
        {
            c-=a[i];
            ld z=(double)a[i]/(double)c;
            if(z>d)
            {
                x=((100*a[i])-(k*c))/k + (((100*a[i])-(k*c))%k!=0);
                l=max(l,x);
            }
        }
        cout<<l<<endl;

    }

    return 0;
}

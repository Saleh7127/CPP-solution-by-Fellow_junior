#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n;
    while(cin>>n && n)
    {
        ll a[n+5],b=0,c=0,i,j,k,l;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {

            b+=a[i];

            c=max(c,b);

            if(b<0) b=0;
        }
        if(c<=0) cout<<"Losing streak."<<endl;
        else cout<<"The maximum winning streak is "<<c<<"."<<endl;

    }

    return 0;
}

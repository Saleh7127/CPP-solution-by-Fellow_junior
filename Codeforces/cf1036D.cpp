#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k=0,l;
    cin>>n;
    ll a[n+5];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        k+=a[i];
    }
    cin>>m;
    ll b[m+5];
    for(i=0; i<m; i++)
    {
        cin>>b[i];
        k-=b[i];
    }
    if(k!=0) cout<<-1<<endl;
    else
    {
        i=0,j=0,l=0;
        ll x=a[0],y=b[0];
        while(i<n && j<m)
        {
            if(x==y)
            {
                ++l;
                i++;
                x+=a[i];
                j++;
                y+=b[j];

            }
            else if(x>y)
            {
                j++;
                y+=b[j];
            }
            else
            {
                i++;
                x+=a[i];
            }
        }
        cout<<l<<endl;
    }
    return 0;
}

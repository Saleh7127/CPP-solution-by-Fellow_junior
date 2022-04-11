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

        ll n,m,i,j,k,l,x;

        cin>>n>>m>>k;

        l=k/m;

        if(n<=l)
        {
            x=n*(n-1)/2;
            cout<<x<<endl;
        }
        else
        {
            x=n*l-(l*(l+1))/2;
            cout<<x<<endl;
        }
    }

    return 0;
}

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

        cin>>n>>m;

        l=n-n/2;

        if(n%2==1) l=n/2;
        else l=n/2 - 1;

        k=m/(n-l);

        cout<<k<<endl;
    }


    return 0;
}

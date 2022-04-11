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
          ll n;
        cin>>n;

        if(n%3==0) cout<<n/3<<" "<<n/3<<endl;
        else if(n%3==2) cout<<n/3<<" "<<1+n/3<<endl;
        else cout<<1+n/3<<" "<<n/3<<endl;

    }


    return 0;
}

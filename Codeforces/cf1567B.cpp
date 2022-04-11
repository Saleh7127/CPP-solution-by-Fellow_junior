#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

ll xorr(ll x)
{
    if (x%4==0) return x;
    if (x%4==1)return 1;
    if (x%4==2)return x+1;
    return 0ll;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
         ll a,b;

         cin>>a>>b;

         if(xorr(a-1)==b) cout<<a<<endl;
         else if(xorr(a)==b) cout<<a+2<<endl;
         else cout<<a+1<<endl;
    }


    return 0;
}

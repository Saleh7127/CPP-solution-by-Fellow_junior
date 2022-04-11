#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        ll n,a=0,b;
        cin>>n;
        while(n>0)
        {
            b=n%10;
            a=max(b,a);
            n/=10;
        }
        cout<<a<<endl;
    }

    return 0;
}

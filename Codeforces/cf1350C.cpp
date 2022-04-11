#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll c,d,e,f,i,j,k,l,lm,gc=0;

    cin>>c>>d;
    k=d;
    for(i=1;i<c;i++)
    {
        cin>>e;
        lm=(e*k)/__gcd(e,k);
        k=__gcd(e,k);
        gc=__gcd(gc,lm);
    }
    cout<<gc<<endl;
    return 0;
}

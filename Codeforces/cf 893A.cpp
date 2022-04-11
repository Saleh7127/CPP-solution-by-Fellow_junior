#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,a,b,c,d,e=3,f,i,j,k,l=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a==e)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        e=6-e-a;
    }
    cout<<"YES"<<endl;

    return 0;
}

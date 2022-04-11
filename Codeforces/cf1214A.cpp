#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll dol[]= {1,2,5,10,20,50,100};
    ll eu[]= {5,10,20,50,100,200};

    ll n,d,e,a,b,i,j,k,l;

    cin>>n>>d>>e;
    k=1000000000000000;
    for(i=0;i*5*e<=n;i++)
    {
        a=n-(i*5*e);
        k=min(k,a%d);
    }

    cout<<k<<endl;
    return 0;
}

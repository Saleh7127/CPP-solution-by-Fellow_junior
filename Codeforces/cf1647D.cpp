/***
 created: 2022-03-14-16.08.08
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

bool prime(ll n)
{
    if(n<=2) return 1;

    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0) return 0;
    }

    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m=0,i,j,k,l=0;

        cin>>n>>k;


        if(n%(k*k)!=0)
        {
            cout<<"NO"<<nl;
            continue;
        }


        while(n%k==0)
        {
            l++;
            n/=k;
        }

        if(prime(n)==0)
        {
            m=1;
        }

        else if(l==2 || prime(k)==1) m=0;

        else if(l>3) m=1;

        else if(k==n*n) m=0;

        else m=1;

        if(m) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }

    get_lost_idiot;
}

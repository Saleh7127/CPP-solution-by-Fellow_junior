/***
 created: 2022-02-18-21.13.25
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll phi[1000005];
ll ans[1000005];

void eulerphi()
{
    for(ll i=0; i<=1000005; i++)
    {
        phi[i]=i;
    }

    for(ll i=2; i<=1000005; i++)
    {
        if(phi[i]==i)
        {
            for(ll j=i; j<=1000005; j+=i)
            {
                phi[j]-= phi[j]/i;
            }
        }
    }
    for(ll i=1; i<=1000005; i++)
    {
        for(ll j=i; j<=1000005; j+=i)
        {
            ans[j]+=(i*phi[i]);
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    /// ∑LCM(i, n) = ((∑(d * ETF(d)) + 1) * n) / 2

    eulerphi();

    test
    {
         ll n,m,i,k;

         cin>>n;

         m=(ans[n]+1)*n;

         cout<<m/2<<nl;
    }


    get_lost_idiot;
}


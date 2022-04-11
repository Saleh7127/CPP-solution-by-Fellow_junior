#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k,l,ans;

    cin>>n>>m;
    vector<ll>x(m+5);

    for(i=0; i<m; i++) cin>>x[i];

    ans=n;

    for(i=1; i<(1<<m); i++)
    {
        bitset<32>check = bitset<32>(i);

        k=1;
        l=0;
        for(j=0; j<m; j++)
        {
            //if(i && (1<<j))

            if(check[j]==1)
            {
                l++;
                k=lcm(k,x[j]);
            }
        }
        if(l%2) ans-=(n/k);
        else ans+=(n/k);
    }

    cout<<ans<<endl;

    ///AUBUC = A+B+C-A∩B-A∩C-B∩C+A∩B∩C
    ///so ans= n - A - B - C + A∩B + A∩C + B∩C - A∩B∩C


    return 0;
}


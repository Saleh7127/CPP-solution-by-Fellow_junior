/***
 created: 2022-02-19-22.11.08
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
#define row vector<ll>
#define matrix vector<vector<ll>>
ll mod=1e9+9;

matrix operator*(const matrix& a, const matrix& b)
{
    ll r,c,p;

    r=a.size();
    p=a[0].size();
    assert(p==b.size());

    /// first matrix must have the same number of columns
    ///as the second matrix has rows

    c=b[0].size();

    matrix ans(r,row(c,0));

    ll i,j,k;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            for(k=0; k<p; k++)
            {
                ans[i][j]=(ans[i][j]+a[i][k]*b[k][j])%mod;
            }
        }
    }
    return ans;
}

matrix bigmod(matrix &a,ll p)
{
    if(p==1) return a;

    matrix x=bigmod(a,p/2);

    x=x*x;

    if(p&1) x=(x*a);

    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    matrix base = {{1,1,1},{1,0,0},{0,1,0}};
    matrix ans1 = {{2},{1},{0}};

    ll n;

    while(cin>>n && n)
    {

        if(n<=3) cout<<n-1<<nl;

        else
        {
            matrix ans= bigmod(base,n-3);

            ans=ans*ans1;

            cout<<ans[0][0]<<nl;
        }
    }

    get_lost_idiot;
}


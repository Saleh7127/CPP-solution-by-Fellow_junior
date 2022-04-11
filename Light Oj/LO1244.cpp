/***
 created: 2022-03-01-00.17.00
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
#define row vector<ll>
#define matrix vector<vector<ll>>
ll mod=1e4+7;

matrix operator*(const matrix& a, const matrix& b)
{
    ll r,c,p;

    r=a.size();
    p=a[0].size();
    assert(p==b.size()); ///checking row==col

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


    matrix base = {{2,0,1},{1,0,0},{0,1,0}};
    matrix statem = {{11},{5},{2}};

    test
    {
        ll n,m;

        cin>>n;

        if(n<=2)
        {
            n=n;
        }
        else if(n==3) n=5;
        else if(n==4) n=11;
        else
        {
            matrix ans= bigmod(base,n-4);

            ans=ans*statem;

            n=ans[0][0];
        }

        cout<<"Case "<<cs<<": "<<n%mod<<nl;

    }

    get_lost_idiot;
}


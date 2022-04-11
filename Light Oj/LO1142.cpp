/***
 created: 2022-03-03-21.32.02
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
#define row vector<ll>
#define matrix vector<vector<ll>>

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
                ans[i][j]=(ans[i][j]+a[i][k]*b[k][j])%10;
            }
        }
    }
    return ans;
}

matrix addition(const matrix& a, const matrix& b)
{
    ll r,c,p,i,j,k;

    r=a.size();
    c=b[0].size();

    matrix ans(r,row(c,0));

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            ans[i][j]=(a[i][j]+b[i][j])%10;
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

matrix solve(matrix a,ll k)
{
    if(k==1) return a;

    if(k&1)
    {
        return addition(solve(a,k-1),bigmod(a,k));
    }

    matrix xx=solve(a,k/2);

    return addition(xx,(xx*bigmod(a,k/2)));
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    /*

    For Even K

    f(k=2x) = [A + A^2 + A^3 + ... + A^x ] + [A^(x+1) + A^(x+2) + .... + A^(x+x)]
    = [A + A^2 + A^3 + ... + A^x ] + [A^x(A + A^2 + A^3 + ... + A^x)]
    = [A + A^2 + A^3 + ... + A^x ] * (A^x + 1)
    = f(k/2) * A^(k/2) +  f(k/2) ;

    For Odd K

    f(K)= f(k-1)+A^k

    */

    test
    {
        ll n,m,i,j,k,l;

        cin>>n>>k;

        matrix base(n+2,row(n+2,0));

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>base[i][j];
            }
        }

        matrix ans=solve(base,k);

        cout<<"Case "<<cs<<":"<<nl;

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cout<<ans[i][j];
            }
            cout<<nl;
        }

    }

    get_lost_idiot;
}

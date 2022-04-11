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
ll mod;

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

    test
    {

        ll n,q,a1,a2,b1,b2,c1,c2,f0,f1,f2,g0,g1,g2;

        cin>>a1>>b1>>c1;
        cin>>a2>>b2>>c2;
        cin>>f0>>f1>>f2;
        cin>>g0>>g1>>g2;

        matrix base = {{a1,b1,0,0,0,c1},
            {1,0,0,0,0,0},
            {0,1,0,0,0,0},
            {0,0,c2,a2,b2,0},
            {0,0,0,1,0,0},
            {0,0,0,0,1,0}
        };

        matrix statem = {{f2},{f1},{f0},{g2},{g1},{g0}};

        cin>>mod;

        cin>>q;

        cout<<"Case "<<cs<<":"<<nl;

        while(q--)
        {
            cin>>n;

            if(n==0)
            {
                cout<<f0%mod<<" "<<g0%mod<<nl;
            }
            else if(n==1)
            {
                cout<<f1%mod<<" "<<g1%mod<<nl;
            }
            else if(n==2)
            {
                cout<<f2%mod<<" "<<g2%mod<<nl;
            }
            else
            {
                matrix ans=bigmod(base,n-2);

                ans=ans*statem;

                cout<<ans[0][0]%mod<<" "<<ans[3][0]%mod<<nl;

            }

        }

    }

    get_lost_idiot;
}


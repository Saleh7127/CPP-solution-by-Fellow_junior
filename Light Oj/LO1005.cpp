#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll dp[90][90];

ll nCr(ll n,ll r)
{
    if(n==r || r==0) return 1;
    else if(r==1) return n;
    else if(dp[n][r]!=-1) return dp[n][r];

    dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);

    return dp[n][r];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll f[20],i,j,k,l;
    f[0]=1;
    f[1]=1;
    for(i=2; i<=20; i++)
    {
        f[i]=f[i-1]*i;
    }

    memset(dp,-1,sizeof dp);

    test
    {
        ll n,k;

        cin>>n>>k;

        cout<<"Case "<<cs<<": ";

        if(k>n) cout<<0<<endl;
        else
        {
            l=nCr(n,k)*nCr(n,k)*f[k];;

           /// take k row from n row = nCk
           /// take k col from n col = nCk
           /// k rook can arrange among themselves in k! ways

            cout<<l<<endl;
        }

    }

    return 0;
}

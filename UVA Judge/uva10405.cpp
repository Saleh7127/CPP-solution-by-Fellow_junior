#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll dp[1005][1005];

string a,b;

ll lcs(ll i,ll j)
{
    if(i<0 || j<0) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    if(a[i]==b[j])
    {
        dp[i][j]=max(dp[i][j],1+lcs(i-1,j-1));
    }
    else dp[i][j]=max(lcs(i-1,j),lcs(i,j-1));

    return dp[i][j];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    while(getline(cin,a))
    {
        getline(cin,b);
        memset(dp,-1,sizeof dp);

        ll l=a.size()-1;
        ll k=b.size()-1;

        cout<<lcs(l,k)<<endl;
    }


    return 0;
}

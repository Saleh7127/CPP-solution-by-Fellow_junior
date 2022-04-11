#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll N=1000003;
ll phi[1000003];
ll ans[1000003];
void solve()
{
    ll i,j,k,l;

    for(i=1; i<N; i++)
    {
        phi[i]=i;
    }
    for(i=2; i<N; i++)
    {
        if(phi[i]==i)
        {
            for(j=i; j<N; j+=i)
            {
                phi[j]/=i;
                phi[j]*=i-1;
            }
        }
    }
    for(i=1;i<N;i++)
    {
        for(j=2*i;j<N;j+=i)
        {
            ans[j]=ans[j]+(i*phi[j/i]);
        }
    }
    for(i=1;i<=N;i++)
    {
        ans[i]=ans[i]+ans[i-1];
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    ll n;
    while(cin>>n && n)
    {
        cout<<ans[n]<<endl;
    }


    return 0;
}

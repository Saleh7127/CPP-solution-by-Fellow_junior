#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>p;
bool mark[1000005];
void sieve()
{
    ll i,j;
    for(i=5; i<1000005; i+=4)
    {
        if(mark[i]==0)
        {
            p.push_back(i);
            for(j=2*i; j<1000005; j+=i)
            {
                mark[j]=1;
            }
        }
    }
}

ll solve(ll n)
{
    ll ans=0,i,j,k,l;
    memset(mark,0,sizeof(mark));

    for(i=0; i<p.size() && p[i]*p[i]<=n; i++)
    {
        for(j=i; j<p.size() && p[i]*p[j]<=n; j++)
        {
            k=p[i]*p[j];

            if(mark[k]==0)
            {
                ans++;
                mark[k]=1;
            }
        }
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();
    ll n;
    while(cin>>n && n)
    {
        cout<<n<<" "<<solve(n)<<endl;
    }

    return 0;
}

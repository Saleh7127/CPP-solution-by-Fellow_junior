#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 10000002
ll bp[maX+2];
bool marked[maX+2];
void sieve()
{
    for(ll i=2; i<=maX; i++)
    {
        if(marked[i]==0)
        {
            for(ll j=i; j<=maX; j+=i)
            {
                if(bp[j]==0) bp[j]=i;
                marked[j]=1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    ll n,m,i,j,k,l;

    cin>>n;

    vector<ll>a,b;

    for(i=0; i<n; i++)
    {
        cin>>m;

        k=bp[m];

        l=1;

        while(m%k==0)
        {
            l*=k;
            m/=k;
        }

        if(m!=1)
        {
            a.push_back(m);
            b.push_back(l);
        }
        else
        {
            a.push_back(-1);
            b.push_back(-1);
        }
    }

    for(auto s:a)
    {
        cout<<s<<" ";
    }
    cout<<endl;
    for(auto s:b)
    {
        cout<<s<<" ";
    }
    cout<<endl;


    return 0;
}

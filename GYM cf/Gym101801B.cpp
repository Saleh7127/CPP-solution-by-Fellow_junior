#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000008
vector<ll>p;
map<ll,ll>ans;
bool marked[maX];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4; i<=maX; i+=2)
    {
        marked[i]=1;
    }

    p.push_back(2);
    for(ll i=3; i<=maX; i+=2)
    {
        if(marked[i]==0)
        {
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=1;
            }
        }
    }
    for(ll i=3; i<=maX; i+=2)
    {
        if(marked[i]==0)
        {
            p.push_back(i);
        }
    }
}

void fact(ll x)
{
    ll i,j;

    for(i=0; p[i]*p[i]<=x; i++)
    {
        if(x%p[i]==0)
        {
            ans[p[i]]++;
            while(x%p[i]==0)
            {
                x/=p[i];
            }
        }
    }
    if(x>1) ans[x]++;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    test
    {
        ll n,i,j,k,l;
        cin>>n;

        ans.clear();

        while(n--)
        {
            cin>>k;
            fact(k);
        }

        l=0;

        for(auto i:ans)
        {
            if(i.second%3!=0) l+=(1+i.second/3);
            else l+=(i.second/3);
        }
        cout<<l<<endl;
    }


    return 0;
}

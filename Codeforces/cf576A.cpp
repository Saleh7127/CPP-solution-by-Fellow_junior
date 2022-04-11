#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 10008
bool marked[maX];
vector<ll>p,q;
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            for(ll j=i*i; j<=maX; j+=i+i)
            {
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

    ll a,i,j;
    cin>>a;

    for(i=2; i<=a; i++)
    {
        if(marked[i]==0)
        {
            p.push_back(i);
        }
    }

    for(i=0;i<p.size();i++)
    {
        q.push_back(p[i]);
        ll x=p[i];
        for(j=2; ;j++)
        {
            ll z=pow(x,j);
            if(z<=a)
            {
                q.push_back(z);
            }
            else break;
        }
    }

    cout<<q.size()<<endl;

    for(i=0; i<q.size(); i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;

    return 0;
}

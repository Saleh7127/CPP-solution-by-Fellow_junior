#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define maX 20000005
#define ll long long int
bool marked[maX];
vector<ll>prime;

void sieve()
{
    marked[0]=true;
    marked[1]=true;
    for(ll i=4; i<=maX; i+=2)
    {
        marked[i]=true;
    }
    for(ll i=3; i*i<=maX; i+=2)
    {
        if(marked[i]==false)
        {
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=true;
            }
        }
    }
    prime.clear();
    prime.push_back(2);
    for(ll i=3; i<=maX; i++)
    {
        if(marked[i]==false)
        {
           prime.push_back(i);
        }
    }
}

int main()
{
    sieve();
    vector<ll > twin;
    for(ll i=0;i<prime.size()-1;i++)
    {
        if(prime[i+1]-prime[i]==2)
        {
            twin.push_back(prime[i]);
        }
    }

    ll a,c;
    while(cin>>a)
    {
        a=a-1;
        printf("(%lld, %lld)\n",twin[a],twin[a]+2);
    }
    return 0;
}

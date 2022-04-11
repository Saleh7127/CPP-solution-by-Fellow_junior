#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maX 1000005
ll ans[1000008];

vector<ll>p;
bool marked[maX];
void sieve()
{
    for(ll i=4; i<=maX; i+=2)
    {
        marked[i]=1;
    }

    p.push_back(2);

    for(ll i=3; i<=maX; i+=2)
    {
        if(marked[i]==0)
        {
            p.push_back(i);
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=1;
            }
        }
    }
}

void div()
{
    ll i,j,a,d,e;

    ans[0]=0;
    ans[1]=1;
    for(i=2; i<1000001; i++)
    {
        a=i;
        d=1;
        for(j=0; (p[j]*p[j])<=a; j++)
        {
            if(a%p[j]==0)
            {
                e=1;
                while(a%p[j]==0)
                {
                    e++;
                    a/=p[j];
                }
                d*=e;
            }
        }
        if(a>1) d=d*2;
        ans[i]=d+ans[i-1];
    }
}

int main()
{

    sieve();
    div();

    ll x;
    cin>>x;

    cout<<ans[x-1]<<endl;

    return 0;
}



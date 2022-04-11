#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define maX 1000008
bool marked[maX];
vector<ll>p;
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    p.push_back(2);
    for(ll i=4; i<=maX; i+=2)
    {
        marked[i]=1;
    }
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
ll sumdigit(ll x)
{
    ll sum=0;
    while(x)
    {
        sum+=(x%10);
        x/=10;
    }
    return sum;
}
int main()
{
    sieve();
    test
    {
        ll a,c,d,e,f,i,j,k,l;
        cin>>a;
        while(1)
        {
            a++;
            d=a;
            ll sum1=0;
            ll sum2=sumdigit(a);
            f=0;
            for(i=0;i<p.size() && p[i]*p[i]<=d; i++)
            {
                if(d%p[i]==0)
                {
                    while(d%p[i]==0)
                    {
                        sum1+=sumdigit(p[i]);
                        d/=p[i];
                        f++;
                    }
                }
            }
            if(d>1)
            {
                sum1+=sumdigit(d);
                f++;
            }
            if(sum1==sum2 && f>1)
            {
                cout<<a<<endl;
                break;
            }
        }
    }
    return 0;
}

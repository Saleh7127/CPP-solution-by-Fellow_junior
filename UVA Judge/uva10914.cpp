#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 10000008
ll ans[maX];
bool marked[maX];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4; i<=maX; i+=2)
    {
        marked[i]=1;
    }
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
}

void pre()
{

    ll i,j,k,l;
    for(i=6; i<maX; i+=2)
    {
        k=i;
        l=1;
        while(k%2==0)
        {
            k/=2;
            l++;
        }
        if(marked[k]==1) continue;

        ll twsum=pow(2,l)-1;

        ll x=(k*k)-1;

        ll oddsum=x/(k-1);

        ll divsum=twsum*oddsum;

        ll anssum=divsum-(2*i);

        ans[i]=anssum;
    }
    for(i=2; i<maX; i++)
    {
        ans[i]=ans[i]+ans[i-1];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();
    pre();

    ll n;
    while(cin>>n && n)
    {
        cout<<n<<" "<<ans[n]<<endl;
    }


    return 0;
}

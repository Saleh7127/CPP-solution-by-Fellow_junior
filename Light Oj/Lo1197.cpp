#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 56350
bool marked[maX];
vector<ll>prime;
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
    prime.push_back(2);
    for(ll i=3; i<=maX; i+=2)
    {
        if(marked[i]==0)
        {
            prime.push_back(i);
        }
    }
}

void segmented_sieve(ll l,ll r)
{
    bool mark[r-l+1]= {0};
    ll base,cp,i,j,cnt=0;

    if(l==1) mark[0]=1;
    for(i=0; prime[i]*prime[i]<=r; i++)
    {
        cp=prime[i];
        base=cp*cp;
        if(base<l)
        {
            base=((l+cp-1)/cp)*cp;
        }
        for(j=base; j<=r; j+=cp)
        {
            mark[j-l]=1;
        }
    }
    for(i=0; i<=r-l; i++)
    {
        if(mark[i]==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    test
    {
        ll r,l;
        cin>>l>>r;
        cout<<"Case "<<cs<<": ";
        segmented_sieve(l,r);
    }


    return 0;
}

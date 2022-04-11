#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000008
vector<ll>p;
vector< pair <ll,ll > >dll;
long long int base, num,ans;
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
            for(ll j=i*i; j<=maX; j+=2*i)
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

void divisors()
{
    ll i,j,k,l,x;
    x=base;
    for(i=0; p[i]*p[i]<=base && i<p.size(); i++)
    {
        if(x%p[i]==0)
        {
            k=p[i];
            l=0;
            while(x%k==0)
            {
                 l++;
                x/=k;
            }
            dll.push_back(make_pair(k,l));
        }
    }
    if(x>1) dll.push_back(make_pair(x,1));

}

void zeros()
{

    ll a,c,i,j,k,l;
    for(i=0; i<dll.size(); i++)
    {
        a=num;
        c=0;
        while(a)
        {
            c=c+(a/dll[i].first);
            a/=dll[i].first;
        }
        c/=dll[i].second;
        ans=min(ans,c);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();
    cin>>num>>base;

    dll.clear();
    ans=num;

    divisors();
    zeros();

    cout<<ans<<endl;


    return 0;
}

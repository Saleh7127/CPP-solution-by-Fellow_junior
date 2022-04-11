#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned int
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 100000002
bitset<maX>marked;
vector<ull>p;
ull pre[maX+2];
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
            p.push_back(i);
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=1;
            }
        }
    }
}

void precal()
{
    pre[0]=2;
    for(ll i=1; i<p.size(); i++)
    {
        pre[i]=(pre[i-1]*p[i]);
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    sieve();
    precal();


    test
    {

        ll n,i,k;

        ull ans=1;

        cin>>n;

        k = upper_bound(p.begin(),p.end(),n)-p.begin();

        k--;

        ans*=pre[k];

        for(i=0;p[i]*p[i]<=n && i<p.size(); i++)
        {

            ll x=n;
            ll j=0;

            while(x/p[i])
            {
                x/=p[i];
                j++;
            }

            ans*=pow(p[i],j-1);

        }

        if(n==1) ans=1;
        cout<<"Case "<<cs<<": "<<ans<<endl;
    }
    return 0;
}

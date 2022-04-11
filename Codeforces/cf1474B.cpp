#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000008
bool marked[maX];
vector<ll>p;
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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    test
    {

        ll a,b,c,d,e,f,i,j,k,l;
        cin>>d;

        for(i=0; i<p.size(); i++)
        {
            if(p[i]>=(1+d))
            {
                b=p[i];
                break;
            }
        }
        for(;i<p.size();i++)
        {
            if(p[i]>=(b+d))
            {
                c=p[i];
                break;
            }
        }
        cout<<b*c<<endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000008
bool marked[maX+5];
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

    ll a,c,d,e,f,i,j,k,l=0;

    cin>>a>>k;


    for(i=2; i<=a; i++)
    {
        if(marked[i]==0)
        {
            for(j=0; j<p.size() && p[j]<=a; j++)
            {
                c=p[j]+p[j+1]+1;
                if(c==i)
                {
                    l++;
                    break;
                }
            }
        }
    }
    if(l<k)
    {
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000000000
bool marked[1000000000];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    ll n=100000000;
    ll limit=sqrt(n*1.0)+1;
    for(ll i=4; i<=n; i+=2)
    {
        marked[i]=1;
    }
    for(ll i=3; i<=n; i+=2)
    {
        if(marked[i]==0)
        {
            if(i<=limit)
            {
                for(ll j=i*i; j<=n; j+=(2*i))
                {
                    marked[j]=1;
                }
            }
        }
    }
}

bool check(ll n)
{
    string x=to_string(n),y=x;

    while(prev_permutation(x.begin(),x.end()))
    {
        if(marked[stoi(x)]) return 0;
    }
    while(next_permutation(y.begin(),y.end()))
    {
        if(marked[stoi(y)]) return 0;
    }
    return 1;
}

int main()
{


    sieve();
    ll n,c,d,e,f,l,h,i;

    while(cin>>n && n)
    {
        c=0;
        l=n+1;
        f=log10(n);
        h=pow(10,f+1);
        for(i=l;i<h;i++)
        {
            if(marked[i]==0)
            {
                if(check(i))
                {
                    c=i;
                    break;
                }
            }
        }
        cout<<c<<endl;
    }


    return 0;
}

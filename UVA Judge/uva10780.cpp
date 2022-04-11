#include <bits/stdc++.h>
using namespace std;
#define maX 10008
#define ll long long
vector<ll>p;
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
            p.push_back(i);
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=1;
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();
    ll t;
    cin>>t;
    for(ll x=1; x<=t; x++)
    {
        ll n,m;;

        cin>>m>>n;

        cout<<"Case "<<x<<":"<<endl;

        if(m==1 || n==1)
        {
            cout<<"Impossible to divide"<<endl;
        }
        else
        {
            map<ll, ll>xx;
            map<ll, ll>::iterator it;
            ll c,d,i,j,k,l=0,ans=100000;
            k=m;
            for(i=0;p[i]<=sqrt(k);i++)
            {
                if(k%p[i]==0)
                {
                    while(k%p[i]==0)
                    {
                        k=k/p[i];
                        xx[p[i]]++;
                    }
                }
            }
            if(k>1) xx[k]++;
            for(it=xx.begin();it!=xx.end();it++)
            {
                c=0;
                d=n;
                while(d)
                {
                    c+=(d/it->first);
                    d=(d/it->first);
                }
                if(c<it->second)
                {
                    l=1;
                    break;
                }
                ans=min(ans,c/it->second);
            }
            if(l==1) cout<<"Impossible to divide"<<endl;
            else cout<<ans<<endl;

        }
    }
    return 0;
}

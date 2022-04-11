#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 10000002
vector<ll>p;
bool marked[maX+2];
void sieve()
{
    marked[0]=0;
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

bool ccc(ll n)
{
    for(ll j=2; j*j<=n; j++)
    {
        if(n%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    ll n,m,i,j,k,l,a,b;


    cin>>n;
    if(n<=10000002 && marked[n]==0)
    {
        cout<<1<<endl<<n<<endl;
    }
    else if(n>10000002 && ccc(n)==1)
    {
        cout<<1<<endl<<n<<endl;
    }

    else
    {
        vector<ll>x;

        x.push_back(2);

        n-=2;
        a=0;
        for(i=0; i<p.size() && p[i]<=n; i++)
        {
            l=n-p[i];

            k=0;
            if(l>=10000002 && ccc(l)==0)
            {
                k=1;
            }
            else if(l<10000002)
            {
                if(marked[l]==1) k=1;
            }

            if(k==0 || l==0)
            {
                x.push_back(p[i]);
                if(l!=0) x.push_back(l);

                for(auto d:x)
                {
                    a+=d;
                }

                break;
            }

        }

        if(a==n+2)
        {
            cout<<x.size()<<endl;
            for(auto d:x)
            {
                cout<<d<<" ";
            }
            cout<<endl;
            return 0;
        }

        x.clear();

        x.push_back(3);

        n-=1;
        a=0;
        for(i=0; i<p.size() && p[i]<=n; i++)
        {
            l=n-p[i];

            k=0;
            if(l>=10000002 && ccc(l)==0)
            {
                k=1;
            }
            else if(l<10000002)
            {
                if(marked[l]==1) k=1;
            }

            if(k==0 || l==0)
            {
                x.push_back(p[i]);
                if(l!=0) x.push_back(l);

                for(auto d:x)
                {
                    a+=d;
                }

                break;
            }

        }

        if(a==n+3)
        {
            cout<<x.size()<<endl;
            for(auto d:x)
            {
                cout<<d<<" ";
            }
            cout<<endl;
            return 0;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000008
bool marked[maX+2];
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
            p.push_back(i);
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=1;
            }
        }
    }
}

ll f[2000006];
void pree()
{
     f[1]=0;

     for(ll i=2;i<=1000000;i++)
     {
          if(marked[i]==0) f[i]=f[i-1]+1;
          else f[i]=f[i-1];
     }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();
    pree();

    test
    {
        ll n,m,i,j,k,l=0;

        cin>>n;

        if(n<=3) cout<<n<<"\n";
        else
        {
            k=sqrt(n);

            cout<<(f[n]-f[k]+1)<<"\n";

            /*
            j=sqrt(n);

            k=upper_bound(p.begin(),p.end(),n)-p.begin();
            l=upper_bound(p.begin(),p.end(),j)-p.begin();

            cout<<k-l+1<<"\n";
            */
        }
    }

    return 0;
}

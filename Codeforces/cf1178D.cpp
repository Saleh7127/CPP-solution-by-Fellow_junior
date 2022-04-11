#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000008
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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    ll n,c,d,e,f,i,j,k,l;

    cin>>n;

    c=n;
    while(marked[c]==1)
    {
        c++;
    }
    cout<<c<<endl;
    c--;
    cout<<1<<" "<<n<<endl;
    for(i=1; i<n; i++)
    {
        if(c==0) break;
        cout<<i<<" "<<i+1<<endl;
        c--;
    }
    for(i=1; ; i++)
    {
        if(c==0) break;
        cout<<i<<" "<<i+(n/2)<<endl;
        c--;
    }
    return 0;
}

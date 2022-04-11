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

    test
    {

        ll a,b,c=0,d,i,e=0,f=1000000000000000;
        cin>>a>>b;
        if(b==1)
        {
            e=1,b++;
        }
        for(i=b; i<=b+1000; i++)
        {
            d=a;
            c=(i-b)+e;
            while(d>0)
            {
                d/=i;
                c++;
            }
            f=min(f,c);
        }
        cout<<f<<endl;
    }

    return 0;
}

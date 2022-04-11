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
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    for(ll i=3;i<=maX;i+=2)
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

    test
    {
        ll a,n,i,j,k,l=0;

        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>a;
            a++;
            for(j=a;;j++)
            {
                if(marked[j]==0)
                {
                    l+=j;
                    break;
                }
            }
        }

        cout<<"Case "<<cs<<": "<<l<<" Xukha"<<endl;

    }

    return 0;
}

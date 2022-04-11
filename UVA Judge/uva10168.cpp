#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define maX 20000005
#define ll long long int
bool marked[maX];
void sieve()
{
    marked[0]=true;
    marked[1]=true;
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=true;
    }
    for(ll i=3;i*i<=maX;i+=2)
    {
        if(marked[i]==false)
        {
            for(ll j=i*i;j<=maX;j+=i+i)
            {
                marked[j]=true;
            }
        }
    }
}

int main()
{
    sieve();
    ll a,i,j,k,l;
    while(cin>>a)
    {
        j=0;
        if(a<8) printf("Impossible.\n");
        else
        {
            if(a%2==0)
            {
                printf("2 2 ");
                l=a-4;
            }
            else
            {
                printf("2 3 ");
                l=a-5;
            }
            for(i=0;i<a;i++)
            {
                if(marked[i]==false && marked[l-i]==false)
                {
                    printf("%lld %lld\n",i,l-i);
                    j=1;
                    break;
                }
            }
            if(j==0) printf("Impossible.\n");
        }
    }
    return 0;
}


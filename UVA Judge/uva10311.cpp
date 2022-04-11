#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 100000002
bool pm[maX];
void sieve()
{
    pm[2]=false;
    for(ll i=4;i<=100000000;i+=2)
    {
        pm[i]=true;
    }
    for(ll i=3;i<=100000000;i+=2)
    {
        if(!pm[i])
        {
            for(ll j=i*i;j<=100000000;j+=i+i)
            {
                pm[j]=true;
            }
        }
    }
    pm[0]=pm[1]=true;
}
int main()
{
    Faster
    sieve();
    ll a,c,i,j,k,l;
    while(scanf("%lld",&a)==1)
    {
        k=0;
        if(a%2==1)
        {
            c=a-2;
            if(!pm[c] && c>2)
            {
                printf("%lld is the sum of 2 and %lld.\n",a,c);
            }
            else
            {
                printf("%lld is not the sum of two primes!\n",a);
            }
        }
        else
        {
            for(i=a/2+1;i<a;i++)
            {
                c=a-i;
                if(!pm[i] && !pm[c] && i-c>0)
                {
                    k=1;
                    printf("%lld is the sum of %lld and %lld.\n",a,c,i);
                    break;
                }
            }
            if(k==0)
            {
                printf("%lld is not the sum of two primes!\n",a);
            }
        }

    }
    return 0;
}

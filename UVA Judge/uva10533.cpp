#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool pm[1000001];
ll a[1000001];
void sieve()
{
    pm[2]=false;
    for(ll i=4;i<=1000000;i+=2)
    {
        pm[i]=true;
    }
    for(ll i=3;i<=1000000;i+=2)
    {
        if(!pm[i])
        {
            for(ll j=i*i;j<=1000000;j+=i+i)
            {
                pm[j]=true;
            }
        }
    }
    pm[0]=pm[1]=true;
}
int main()
{
    ll t,i,j,k,cnt=1,m,l,r;
    sieve();
    a[2]=1;
    for(i=3;i<=1000000;i++)
    {
        if(!pm[i])
        {
            m=0;
            k=i;
            while(k>0)
            {
                m+=k%10;
                k/=10;
            }
            if(!pm[m])
            {
                cnt++;
            }
        }
        a[i]=cnt;
    }
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&l,&r);
        printf("%lld\n",a[r]-a[l-1]);
    }
}

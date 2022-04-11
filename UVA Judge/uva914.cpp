#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fio  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 2000000
ll prime[maX];
bool marked[maX];
void sieve()
{
    for(ll i=3; i<=maX; i+=2)
    {
        if(marked[i]==false)
        {
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=true;
            }
        }
    }
    ll k=1;
    prime[0]=2;
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==false)
        {
            prime[k]=i;
            k++;
        }
    }
}
int main()
{
    fio
    sieve();
    test
    {
        ll d,j,k,l,u,fre[200]={0},cnt[200]={0};
        cin>>l>>u;
        if(l>u) swap(l,u);
        if(l==u)
        {
            printf("No jumping champion\n");
            continue;
        }
        for(ll x=0; x<maX; x++)
        {
            if(prime[x]>=l)
            {
                k=x; ///loop start;
                break;
            }
        }
        for(ll i=0; i<maX; i++)
        {
            if(prime[i]>u)
            {
                j=i-1; ///loop end;
                break;
            }
            if(prime[i]==u)
            {
                j=i; ///loop end;
                break;
            }
        }
        for(ll a=k+1;a<=j;a++)
        {
            d=prime[a]-prime[a-1];
            fre[d]++; ///for frequency;
            cnt[d]++; ///for checking same difference;
        }
        sort(cnt,cnt+200,greater<int>());
        if(cnt[0]==cnt[1])
        {
            printf("No jumping champion\n");
        }
        else
        {
            for(ll c=0;c<200;c++)
            {
                if(fre[c]==cnt[0])
                {
                    printf("The jumping champion is %lld\n",c);
                    break;
                }
            }
        }
    }
   return 0;
}

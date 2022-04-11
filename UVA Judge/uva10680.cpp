#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define maX 100000007
bool mark[maX];
int n=maX;
vector < int > prime;
void siv()
{
    int i,j;
    prime.push_back(2);
    for(i=3; i*i<=n; i+=2)
    {
        if(!mark[i])
        {
            for(j=i*i; j<=n; j+=(i+i))
            {
                mark[j]=true;
            }
        }
    }
    for(i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            prime.push_back(i);
        }
    }
}
int main()
{
    siv();

    int n;
    while(cin >> n and n)
    {
        ll ans=1;
        for(int i=0; prime[i]<=n; i++)
        {
            ll a=prime[i];
            while(a*prime[i]<=n)
            {
                a*=prime[i];
            }

            ans*=a;


            ans%=1000000000;
        }
        while(!(ans%10))
        {
            ans/=10;
        }
        cout<<ans%10<<endl;
    }
    return 0;
}


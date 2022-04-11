#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define maX 1000000
#define ll long long
bool marked[maX];
vector<ll>factor,prime;
void sieve()
{
    marked[0]=true;
    marked[1]=true;
    marked[2]=false;
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
    ll cas=1,i,j,k,l,fre[1000];
    string a;
    char c;
    sieve();
    test
    {
        cin>>a;
        l=a.size();

        ll fre[1000]={0}; ///memset(fre,0,sizeof(fre));
        for(i=0;i<l;i++)
        {
            k=a[i];
            fre[k]++;
        }
        j=0;
        printf("Case %lld: ",cas++);
        for(i=48;i<=130;i++)
        {
            if(fre[i]>0)
            {
                if(fre[i]==2)
                {
                    printf("%c",i);
                    j=1;
                }
                else if(fre[i]%2!=0 && marked[fre[i]]==false)
                {
                    printf("%c",i);
                    j=1;
                }
            }
        }
        if(j==0) printf("empty\n");
        else printf("\n");
    }
    return 0;
}

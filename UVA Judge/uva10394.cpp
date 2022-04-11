#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define maX 20000005
#define ll long long int
bool marked[maX];
ll twin[maX]={0};
int main()
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
    ll k=1;
    for(ll i=0;i<=maX;i++)
    {
        if(marked[i]==false && marked[i+2]==false)
        {
            twin[k]=i;
            k++;
        }
    }
    ll a,c;
    while(cin>>a)
    {
        printf("(%lld, %lld)\n",twin[a],twin[a]+2);
    }
}

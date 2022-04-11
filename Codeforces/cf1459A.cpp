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


    string x,y,z;


    test
    {

        ll n,i,a=0,b=0,j;

        cin>>n>>x>>y;

        for(i=0; i<n; i++)
        {
            if(x[i]>y[i])
                a++;
            else if(x[i]<y[i])
                b++;
        }
        if(a>b)cout<<"RED"<<endl;
        else if(a<b)cout<<"BLUE"<<endl;
        else cout<<"EQUAL"<<endl;
    }


    return 0;
}

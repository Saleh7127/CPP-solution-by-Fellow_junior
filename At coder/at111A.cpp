#include<bits/stdc++.h>
using namespace std;

long long mod(long long a,long long b,long long m)
{
    long long res=1;
    a%=m;
    while(b>0)
    {
        if(b&1)
        {
            res=res*a%m;
        }
        a=a*a%m;
        b>>=1;
    }
    return res;
}

int main()
{
    long long a,b,m;
    cin>>a>>m;

    cout<<(mod(10,a,m*m)/m)%m<<endl;
}

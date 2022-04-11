#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,c,d[1000],e=0,f,i,j,k,l;
    cin>>a>>c;
    for(i=0;i<c;i++)
    {
        cin>>d[i];
    }
    for(i=0;i<c;i++)
    {
       e=e+d[i]-a;
       if(e<0) e=0;
    }
    printf("%lld\n",e);
    return 0;
}


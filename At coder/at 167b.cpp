#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,c,d,e,f=0,i,j,k,l;
    cin>>a>>c>>d>>e;
    if(e<=a)
    {
        printf("%lld\n",e);
        return 0;
    }
    if(e<=(a+c))
    {
        f=a*1+(c*0);
        printf("%lld\n",f);
        return 0;
    }
    if(e<=(a+c+d))
    {
        d=e-(a+c);
        f=a*1+(c*0)+(d*-1);
        printf("%lld\n",f);
        return 0;
    }
    return 0;
}

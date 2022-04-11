#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,d,e,f,i,j,k,l;
    scanf("%lld",&t);
    while(t--)
    {

        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if(c==d) printf("%lld %lld %lld\n",b,c,d);
        else printf("%lld %lld %lld\n",b,c,c);
    }
    return 0;
}

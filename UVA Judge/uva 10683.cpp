#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,i,j,m,s,h,c;
    while(scanf("%2lld%2lld%2lld%2lld",&h,&m,&s,&c)!=EOF)
    {
        a=(h*3600+m*60+s)*100+c;
        b=(a*10000000)/8640000;
        printf("%07lld\n",b);
    }
    return 0;
}

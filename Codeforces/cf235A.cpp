#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f;
    scanf("%lld",&a);
    if(a==1)
        printf("1\n");
    else if(a==2)
        printf("2\n");
    else if(a%2!=0)
    {
        b=(a-2)*(a-1)*a;
        printf("%lld\n",b);
    }
    else if(a%3==0)
    {
        b=(a-2)*(a-1)*(a-3);
        printf("%lld\n",b);
    }
    else if(a%3!=0)
    {
        b=a*(a-1)*(a-3);
        printf("%lld\n",b);
    }
    return 0;
}

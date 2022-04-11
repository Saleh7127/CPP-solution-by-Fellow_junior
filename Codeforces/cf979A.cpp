#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e;
    scanf("%lld",&a);

    a=a+1;

    if((a-1)==0)
        printf("0\n");
    else if(a%2==0)
    {
        printf("%lld\n",a/2);
    }
    else if(a%2!=0)
    {
        printf("%lld\n",a);
    }
    return 0;
}

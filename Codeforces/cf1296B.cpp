#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int b,c,d,e,f,i,a,j;
    scanf("%lld",&b);
    while(b--)
    {
        d=0;
        scanf("%lld",&a);
        c=a;
        while(a/10!=0)
        {
            d=(a/10);
            a=a%10+d;
            c=c+d;
        }
        printf("%lld\n",c);
    }
    return 0;
}

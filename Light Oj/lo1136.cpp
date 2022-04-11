#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,i,j,k,l;
    scanf("%lld",&f);
    for(i=1; i<=f; i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a>b)
        {
            swap(a,b);
        }
        if(a%3==0)
        {
            c=(a/3)*2;
        }
        else
        {
            c=(a/3)*2+1;
        }
        b=b+1;
        if(b%3==0)
        {
            d=(b/3)*2;
        }
        else
        {
            d=(b/3)*2+1;
        }
        e=d-c;

        printf("Case %lld: %lld\n",i,e);
    }
    return 0;
}

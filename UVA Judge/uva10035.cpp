#include<bits/stdc++.h>
using namespace std;
long long carry(long long a,long long b)
{
    long long c,d,k,l;
    k=0;
    l=0;
    while(1)
    {
        c=a%10;
        d=b%10;
        a=a/10;
        b=b/10;
        if((c+d+k)>=10)
        {
            l++;
            k=1;
        }
        else k=0;
        if(a==0 && b==0) break;
    }
    return l;
}
int main()
{
    long long i,j,e,f;
    while(1)
    {
        scanf("%lld %lld",&i,&j);
        if(i==0 && j==0) break;
        e = carry(i, j);
        if(e==0)
            printf("No carry operation.\n");
        else if(e==1)
            printf("1 carry operation.\n");
        else
            printf("%lld carry operations.\n",e);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,j,l,a,b;
    scanf("%lld %lld",&n,&k);
    if(n%2==0)
    {
        if(k<=n/2)
        {
            a= 2*k -1;
            printf("%lld\n",a);
        }
        else if(k>n/2)
        {
            a= 2*k-n;
            printf("%lld\n",a);
        }
    }
    else if(n%2!=0)
    {
        if(k<=(n/2 + 1))
        {
            a= 2*k -1;
            printf("%lld\n",a);
        }
        else if(k>(n/2)+1)
        {
            a= 2*k-n-1;
            printf("%lld\n",a);
        }
    }
    return 0;
}



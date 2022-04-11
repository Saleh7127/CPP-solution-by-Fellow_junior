#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[1000000],b,c=0,d,e,i,j,k,l;
    scanf("%lld",&b);
    for(i=0;i<b;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+b);
    for(i=0;i<b;i++)
    {
        if(a[i]>c)
        {
            c++;
        }
    }
    printf("%lld\n",c);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,n,b,c,d,e,i,j,k;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a);
        b=0;
        while(a!=1)
        {
            if(a%2!=0&&a%3!=0&&a%5!=0)
            {
                printf("-1\n");
                goto beyadob;
            }
            else if(a%2==0)
                a=a/2;
            else if(a%3==0)
                a=a*2/3;
            else if(a%5==0)
                a=a*4/5;
            b++;
        }
        printf("%lld\n",b);
        beyadob:;
    }
    return 0;
}

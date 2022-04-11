#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i;
    scanf("%lld",&c);
    for(i=0; i<c; i++)
    {
        scanf("%lld",&a);
        if(a==1)
            printf("1\n");
        else
        {
            b=pow(2,a);

            printf("%lld\n",b-1);
        }
    }

    return 0;

}


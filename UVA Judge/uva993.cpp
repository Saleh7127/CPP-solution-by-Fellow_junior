#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long n;
        int a[1000],c,d,e,f,i,j=0,k,l;
        scanf("%llu",&n);
        if(n>=1 && n<10)
        {
            printf("%d\n",n);
        }
        else if(n==0)
        {
            printf("10\n");
        }
        else
        {
            for(i=9; i>=2; i--)
            {
                while(n%i==0)
                {
                    a[j]=i;
                    j++;
                    n=n/i;
                }
            }
            if(n!=1)
                printf("-1\n");
            else
            {
                for(k=j-1; k>=0; k--)
                {
                    printf("%d",a[k]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}

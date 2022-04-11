#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,j,a,b,c=0;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        c=0;
        scanf("%lld",&b);
        if(b==1 || b==0)
        {
            printf("Not Prime\n");
            continue;
        }
        if(b==2)
        {
            printf("Prime\n");
            continue;
        }
        for(j=2;j<(b/2); j++)
        {
            if(b%j==0)
                c++;
            if(c==2)
                break;
        }
        if(c>=1)
            printf("Not Prime\n");
        else
            printf("Prime\n");

    }

    return 0;
}

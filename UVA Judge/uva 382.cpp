#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    int a,c,d,e,f,i,j,k,l,sum;
    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        sum=1;
        cin>>a;
        if(a==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        for(i=2; i*i<=a; i++)
        {
            if(a%i==0)
            {
                c=a/i;
                sum+=(i+c);
            }
        }
        printf("%5d  ",a);
        if(a==1) printf("DEFICIENT\n");
        else if(sum==a) printf("PERFECT\n");
        else if(sum<a) printf("DEFICIENT\n");
        else if(sum>a) printf("ABUNDANT\n");
    }
    return 0;
}

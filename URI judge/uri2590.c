#include<stdio.h>
int main()
{
    long long int a,i,b;
    scanf("%lld",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lld",&b);
        if(b==1) printf("7\n");
        else if(b==2) printf("9\n");
        else if(b==3) printf("3\n");
        else if(b==4) printf("1\n");
        else if((b-1)%4==0) printf("7\n");
        else if((b-2)%4==0) printf("9\n");
        else if((b-3)%4==0) printf("3\n");
        else if((b-4)%4==0) printf("1\n");
    }
    return 0;
}

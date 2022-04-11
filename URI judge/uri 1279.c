#include<stdio.h>
int main()
{

    long long int a;
    while(scanf("%lld",&a) !=EOF)
    {
        if(a>=2000){
        if(a%4==0 && a%100 !=0 || a%400==0)
        {
            if(a%55==0 && a%15==0)
                printf("This is leap year.\nThis is hulukulu festival year.\nThis is bulukulu festival year.\n");
            else if(a%55 == 0)
                printf("This is leap year.\nThis is bulukulu festival year.\n");
            else if(a%15 == 0)
                printf("This is leap year.\nThis is hulukulu festival year.\n");
            else
                printf("This is leap year.\n");
        }
        else if(a%55 == 0)
            printf("This is bulukulu festival year.\n");
        else if(a%15==0)
            printf("This is hulukulu festival year.\n");
        else
            printf("This is an ordinary year.\n");
        }
    }
}

#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d",&b);
    for( ; ; )
    {
        s=0;
        a=b;
        while(a!=0)
        {
            s+=a%10;
            a=a/10;
        }

         if(s%4==0)
            break;
         else b++;

    }
    printf("%d\n",b);

    return 0;
}

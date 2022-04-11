#include<stdio.h>
int main()
{
    int a,c,d=0;

    for( ; ; )
    {

        scanf("%d",&a);
        if(a==0)break;
        if(a%2!=0)a++;
        for(c=0;c<5;c++){
        d+=a;
        a+=2;
        }
   printf("%d\n",d);
   d=0;
    }


    return 0;
}


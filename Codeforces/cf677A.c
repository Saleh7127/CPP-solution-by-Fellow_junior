#include<stdio.h>
int main()
{
    int a,b,c,i,s=0;
    scanf("%d %d",&a,&b);
    for(i=0; i<a; i++)
    {
        scanf("%d",&c);
        if(c<=b)
            s+=1;
        else
            s+=2;
    }
    printf("%d\n",s);

    return 0;
}

#include<stdio.h>
int main()
{
    int a,i,b,c=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        c+=b;
    }
    if(c%4==0) printf("%d\n",c/4);
     else if(c%4!=0) printf("%d\n",(c/4)+1);

     return 0;
}

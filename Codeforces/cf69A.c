#include<stdio.h>
int main()
{
    int i,t,x,y,z,a=0,b=0,c=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        a+=x;
        b+=y;
        c+=z;
    }


    if(a==0 && b==0 && c==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

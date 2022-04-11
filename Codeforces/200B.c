#include<stdio.h>
int main()
{
    int a,i;
    double s=0.0;
    scanf("%d",&a);
    int b[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0;i<a;i++)
    {
        s+=b[i];
    }
    s=s/a;
    printf("%.12lf\n",s);
    return 0;
}

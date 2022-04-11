#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,f,i,j,k,l;
    scanf("%d",&b);
    int a[b+10];
    for(i=0; i<b; i++)
    {
        scanf("%d",&a[i]);
    }
    c=a[0];
    for(i=0; i<b; i++)
    {
        if(a[i]>c)
        {
            c=a[i];
        }
    }
    if(c<=25)
    {
        printf("0\n");
    }
    else if(c>25)
    {
        printf("%d\n",c-25);
    }
    return 0;
}

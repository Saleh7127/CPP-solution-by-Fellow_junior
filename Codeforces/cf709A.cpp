#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e=0,i,j=0,k,l;
    scanf("%d %d %d",&b,&c,&d);
    int a[b+5];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=c)
        {
            e+=a[i];
        }
        if(e>d)
        {
            j++;
            e=0;
        }
    }
    printf("%d\n",j);

    return 0;
}

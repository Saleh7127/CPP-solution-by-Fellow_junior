#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,f,i,j,k,l;
    for( ; ; )
    {
        scanf("%d",&b);
        if(b==0) break;
        int a[b+10];
        for(i=0;i<b;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+b);
        printf("%d",a[0]);
        for(i=1;i<b;i++)
        {
            printf(" %d",a[i]);
        }
        printf("\n");
    }

    return 0;
}

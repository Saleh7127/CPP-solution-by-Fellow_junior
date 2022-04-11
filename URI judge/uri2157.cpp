#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,l,k;
    scanf("%d",&a);
    for(k=0;k<a;k++)
    {

        scanf("%d %d",&b,&c);
        for(i=b;i<=c;i++)
        {
            printf("%d",i);
        }
        for(j=c;j>=b;j--)
        {
            l=i;
            while(l)
            {
                e=l%10;
                printf("%d",e);
                l=l/10;
            }
        }
        printf("\n");
    }
    return 0;
}

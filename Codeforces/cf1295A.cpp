#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,l;
    scanf("%d",&d);
    for(j=0; j<d; j++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            b=a/2;
            for(i=0; i<b; i++)
            {
                printf("1");
            }
        }
        else
        {
            printf("7");
            b=a/2;
            for(i=1; i<b; i++)
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l,r;
    scanf("%d %d",&a,&b);
    d=a/b;
    r=a%b;
    if(r==0)
    {
        for(i=0; i<b; i++)
        {
            if(i<(b-1))
            {
                printf("%d ",d);
            }
            if(i==(b-1))
            {
                printf("%d\n",d);
            }
        }
    }
    else if(r!=0)
    {
        for(i=0; i<r; i++)
        {
            printf("%d ",d+1);
        }
        for(i=r; i<b; i++)
        {
            if(i<(b-1))
            {
                printf("%d ",d);
            }
            if(i==(b-1))
            {
                printf("%d\n",d);
            }
        }
    }

    return 0;
}

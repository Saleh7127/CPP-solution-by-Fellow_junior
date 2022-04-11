#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,i,j,w,h,n,k,l;
    while(scanf("%d %d %d",&w,&h,&n))
    {
        if(w==0 && h==0 && n==0) break;

        bool a[600][600];
        memset(a,true,sizeof(a));

        long long f=0;
        while(n--)
        {
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            if(x1>x2)
            {
                swap(x1,x2);
            }
            if(y1>y2)
            {
                swap(y1,y2);
            }
            for(i=x1 ; i<=x2; i++)
            {
                for(j=y1; j<=y2; j++)
                {
                    a[i][j]=false;
                }
            }
        }
        for(k=1; k<=w; k++)
        {
            for(l=1; l<=h; l++)
            {
                if(a[k][l]) f++;
            }
        }
        if(f==0)
            printf("There is no empty spots.\n");
        else if(f==1)
            printf("There is one empty spot.\n");
        else
            printf("There are %lld empty spots.\n",f);
    }
    return 0;
}

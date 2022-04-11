#include<bits/stdc++.h>
using namespace std;
int a[1000000],d[1000000];
int main()
{
    int b,c,e,f,i,j,k,l,t;
    scanf("%d",&t);
    for(int x=1;x<=t;x++)
    {
        scanf("%d",&b);
        i=0;
        e=0;
        while(b)
        {
            c=b%2;
            a[i++]=c;
            b/=2;
        }
        a[i++]=0;
        for(k=i-1,l=0;k>=0;k--,l++)
        {
            d[l]=a[k];
        }

        for(j=i-1;j>0;j--)
        {
            if(d[j]==1 && d[j-1]==0)
            {
                swap(d[j],d[j-1]);
                break;
            }
        }
        sort(d+j+1,d+i);
        for(k=i-1,l=0;k>=0;k--,l++)
        {
            e+=(d[k]*pow(2,l));
        }
        printf("Case %d: %d\n",x,e);
    }
    return 0;
}

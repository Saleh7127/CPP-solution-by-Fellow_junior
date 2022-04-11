#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,row,clm,i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&a);
            if(a==1)
            {
                row=i;
                clm=j;
            }
        }
    }
    b= abs(3-row)+abs(3-clm);
    printf("%d\n",b);

    return 0;
}

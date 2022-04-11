#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b[1000],c,d=0,e,i,j,k,l;
    scanf("%d",&c);
    for(k=0;k<c;k++)
    {
        scanf("%d %d",&a[k],&b[k]);
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i]==b[j])
            {
                d++;
            }
        }
    }
    printf("%d\n",d);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b,c=0,d[1000],e,i,j,k,l;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        d[a[i]]++;
        if( d[a[i]]>c)
        {
            c=d[a[i]];
        }
    }

    printf("%d\n",c);

    return 0;
}

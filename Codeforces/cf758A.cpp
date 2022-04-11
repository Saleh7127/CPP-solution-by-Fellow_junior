#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c=0,d=0,i,j;
    scanf("%d",&b);
    for(i=0; i<b; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+b);
    c=a[b-1];
    for(i=0; i<b-1; i++)
    {
        d+=(c-a[i]);
    }
    printf("%d\n",d);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c,d,e,f,i,j,k,l;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+b);
    for(i=0;i<b;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

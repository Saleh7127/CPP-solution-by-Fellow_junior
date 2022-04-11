#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200000],b,c,d,e,i,j,k;
    scanf("%d",&b);
    for(i=0;i<b-1;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+b);
    for(i=1;i<=b;i++)
    {
        if(a[i]!=i)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}

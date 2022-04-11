#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b,c,d,e,i,k,l,j;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+3);
    b= 1+a[2]-(a[0]+a[1]);
    if(b<0) printf("0\n");
    else printf("%d",b);
    return 0;
}

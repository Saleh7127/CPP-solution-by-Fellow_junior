#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,i,j,k;
    scanf("%d",&b);
    int a[b+10];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+b);
    c=a[(b-1)/2];
    printf("%d\n",c);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b=0,i,j,k;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+4);
    for(i=0;i<4;i++)
    {
        if(a[i]==a[i+1])
        {
            b++;
        }
    }
    printf("%d\n",b);

    return 0;
}

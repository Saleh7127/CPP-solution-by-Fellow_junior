#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c=0,d=0,e,f,i,j,k,l;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        c+=a[i];
        if(c<0)
        {
            d++;
            c=0;
        }
    }
    printf("%d\n",d);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b,c=0,d=0,e=0,f,i,j,k,l;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        c+=a[i];
    }
    sort(a,a+b,greater<int>());
    for(i=0;i<b;i++)
    {
        d+=a[i];
        if( d > c-d)
        {
            printf("%d\n",i+1);
            break;
        }
    }

     return 0;
}

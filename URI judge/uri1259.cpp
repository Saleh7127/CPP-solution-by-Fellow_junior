#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c,d,e,f,i,j,k,l;
    scanf("%d",&b);
    for(i=0; i<b; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+b);
    for(k=0; k<b; k++)
    {
        if(a[k]%2==0)
        {
            printf("%d\n",a[k]);
        }
    }
    sort(a,a+b,greater<int>());
    for(j=0; j<b; j++)
    {
        if(a[j]%2==1)
        {
            printf("%d\n",a[j]);
        }
    }
    return 0;
}

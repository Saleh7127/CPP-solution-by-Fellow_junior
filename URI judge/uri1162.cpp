#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c=0,d,e,f,i,j,k,l,t;
    scanf("%d",&b);
    for(k=0; k<b; k++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<b-1; i++)
    {
        for(j=i+1; j<b; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%d\n",c);
}

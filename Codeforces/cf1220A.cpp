#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,i,j,k,l,z=0,n=0;
    scanf("%d",&b);
    char a[b+5];
    scanf("%s",a);
    for(i=0;i<b;i++)
    {
        if(a[i]=='z') z++;
        else if(a[i]=='n') n++;
    }
    for(j=0;j<n;j++)
    {
        printf("1 ");
    }
    for(k=0;k<z;k++)
    {
        printf("0 ");
    }
    printf("\n");

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,l,m,n,o;
    char a[1100],b[1100];
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%[^\n]%*c",a);
        l= strlen(a);
        for(j=0;j<l;j++)
        {
            if((a[j]>64 && a[j]<91) || (a[j]>96 && a[j]<123))
            {
                a[j]=a[j]+3;
            }
        }
        strrev(a);
        k= l/2;
        for(j=k;j<l;j++)
        {
            a[j]=a[j]-1;
        }
        printf("%s\n",a);
    }
    return 0;
}


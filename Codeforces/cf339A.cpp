#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l,m=0,k=0;
    char a[1000];
    scanf("%s",a);
    l= strlen(a);
    sort(a,a+l);

    for(i=0; i<l; i++)
    {

        if(a[i]>47 && a[i]<58)
        {
            printf("%c",a[i]);
            if(i==l-1)
                break;
            printf("+");
        }
    }
    printf("\n");
    return 0;
}

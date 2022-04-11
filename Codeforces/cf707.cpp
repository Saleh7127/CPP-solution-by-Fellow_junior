#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d=0,e,i,j,k,l;
    char a[10000];
    scanf("%d %d",&b,&c);
    for(j=0; j<b; j++)
    {
        getchar();
        scanf("%[^\n]%*c",&a);
        for(i=0; a[i]!='\0'; i++)
        {
            if(a[i]=='C' || a[i]=='M' || a[i]=='Y')
            {
                d++;
            }
        }
    }
    if(d>0)
        printf("#Color\n");
    else
        printf("#Black&White\n");
    return 0;
}

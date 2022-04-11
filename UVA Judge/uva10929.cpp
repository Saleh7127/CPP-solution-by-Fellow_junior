#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,f,i,j,k,l;
    while(1)
    {
        k=0;
        d=0;
        char a[1005];
        scanf("%s",a);
        d=strlen(a);
        if(a[0]=='0' && d==1) break;
        for(j=0;j<d;j++)
        {
            k=(a[j]-48)+k*10;
            k=k%11;
        }
        if(k!=0)
        {
            printf("%s is not a multiple of 11.\n",a);
        }
        else
        {
            printf("%s is a multiple of 11.\n",a);
        }
    }
    return 0;
}

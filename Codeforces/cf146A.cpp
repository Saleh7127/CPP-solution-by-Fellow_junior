#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c=0,d=0,e=0,i,j,k;
    char a[10000];
    scanf("%d %s",&b,a);
    for(i=0; i<b; i++)
    {
        if(a[i]!='4' && a[i]!='7')
        {
            c=1;
        }
        else
        {
            if(i<b/2)
            {
                d+=a[i]-'0';
            }
            else
            {
                e+=a[i]-'0';
            }
        }
    }
    if(c!=1 && d==e)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    char a[10000],b[]="qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    scanf("%c",&c);
    scanf("%s",a);
    k= strlen(a);
    if(c=='L')
    {
        for(i=0;i<k;i++)
        {
            for(j=0;j<strlen(b);j++)
            {
                if(a[i]==b[j])
                {
                    printf("%c",b[j+1]);
                }
            }
        }
        printf("\n");
    }
    if(c=='R')
    {
        for(i=0;i<k;i++)
        {
            for(j=0;j<strlen(b);j++)
            {
                if(a[i]==b[j])
                {
                    printf("%c",b[j-1]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}

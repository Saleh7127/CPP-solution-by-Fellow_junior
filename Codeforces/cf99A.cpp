#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l;
    char a[10000];
    scanf("%s",&a);
    l= strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='.')
        {
            if(a[i-1]=='9')
            {
                printf("GOTO Vasilisa.\n");
            }
            else
            {
                if(a[i-1]!='9' && a[i+1]-'0'>=5)
                {
                    a[i-1]=(a[i-1]-'0' +1 )+'0';
                    for(j=0;j<i;j++)
                    {
                        printf("%c",a[j]);
                    }
                }
                else
                {
                    for(j=0;j<i;j++)
                    {
                        printf("%c",a[j]);
                    }
                }
            }
        }
    }
    return 00000;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    char a[1000];
    while(scanf("%[^\n]%*c",a)!= EOF)
    {
        char b[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
        k = strlen(a);
        for(i=0;i<k;i++)
        {
            for(j=0;j<strlen(b);j++)
            {
                if(a[i]==b[j])
                {
                   a[i]=b[j-1];
                }
            }
        }
        printf("%s\n",a);
    }
    return 0;
}

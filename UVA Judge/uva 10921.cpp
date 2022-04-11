#include<bits/stdc++.h>
using namespace std;
int main()
{
    char b[27]= "22233344455566677778889999";
    char a[100];
    int c,d,e,f,i,j,k,l;
    while(scanf("%s",a) == 1)
    {
        for(i=0; a[i] ; i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                printf("%c",b[a[i]-'A']);
            }
            else
            {
                printf("%c",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

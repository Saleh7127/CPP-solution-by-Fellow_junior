#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,i,j,k,l;
    char a[10000];
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        c=0;
        d=0;
        scanf("%s",a);
        l = strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]=='<')
            {
                c++;
            }
           else if(a[j]=='>' && c>0)
            {
                d++;
                c--;
            }
        }
        printf("%d\n",d);

    }
    return 0;
}

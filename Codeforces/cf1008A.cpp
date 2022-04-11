#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000];
    int i,j=0,k,l;
    scanf("%[^\n]%*c",a);
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='n')
        {
            if(a[i+1]=='a' || a[i+1]=='e' || a[i+1]=='i' || a[i+1]=='o' || a[i+1]=='u')
            {
                continue;
            }
            else
            {
                j=1;
                break;
            }
        }
    }
    if(j==1)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}

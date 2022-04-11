
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,j=0;
    scanf("%s",&a);
    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9')
        {
            j=1;
        }

    }
   if(j==1) printf("YES\n");
    else printf("NO\n");
}

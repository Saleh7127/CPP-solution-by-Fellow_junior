#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,j=0;;
    scanf("%s",&a);
    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='0' && a[i+5]=='0' && a[i+6]=='0')
        {
            j=1;
        }
        if(a[i]=='1' && a[i+1]=='1' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='1' && a[i+5]=='1' && a[i+6]=='1')
        {
            j=1;
        }

    }
       if(j==1) printf("YES\n");
       else printf("NO\n");
}
